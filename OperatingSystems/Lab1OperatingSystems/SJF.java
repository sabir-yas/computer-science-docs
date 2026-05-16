
/**
 * SJF scheduling algorithm.
 */

import java.util.*;

public class SJF implements Algorithm {
    private List<Task> queue;
    private Task currentTask;

    private int tasksRun;

    public SJF(List<Task> queue) {
        this.queue = queue;

        tasksRun = queue.size();
    }

    public void schedule() {
        System.out.println("SJF Scheduling\n");

        while (!queue.isEmpty()) {
            currentTask = pickNextTask();

            CPU.run(currentTask, currentTask.getBurst());

            // now remove the task
            queue.remove(currentTask);
        }
    }

    // IMPLEMENT HOW YOU PICK THE NEXT TASK USING SJF HERE
    public Task pickNextTask() {
        int shortestIndex = 0;
        Task shortestTask = queue.get(shortestIndex);
        int shortestBurst = shortestTask.getBurst();

        for (int i = 1; i < queue.size(); i++) {
            if (queue.get(i).getBurst() < shortestBurst) {
                shortestIndex = i;
                shortestBurst = queue.get(i).getBurst();
            }
        }

        shortestTask = queue.get(shortestIndex);
        return shortestTask;

    }
}
