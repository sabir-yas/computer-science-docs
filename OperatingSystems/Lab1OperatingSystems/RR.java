/**
 * Round Robin scheduling algorithm.
 *
 * This algorithm will run tasks according to round-robin scheduling.
 */

import java.util.*;

public class RR implements Algorithm {

    public static final int QUANTUM = 10;

    private List<Task> queue;
    private Task currentTask;

    public RR(List<Task> queue) {
        this.queue = queue;
    }

    public void schedule() {
        int burst;

        while (!queue.isEmpty()) {

            currentTask = pickNextTask();

            // determine how long to run
            if (currentTask.getBurst() < QUANTUM) {
                burst = currentTask.getBurst();
            } else {
                burst = QUANTUM;
            }

            // run the task
            CPU.run(currentTask, burst);

            // reduce the remaining burst time
            currentTask.setBurst(currentTask.getBurst() - burst);

            // if task finished, remove it
            if (currentTask.getBurst() == 0) {
                System.out.println("Task " + currentTask.getName() + " completed.\n");
                queue.remove(currentTask);
            } 
            else {
                // move task to the back of the queue
                queue.remove(currentTask);
                queue.add(currentTask);
            }
        }
    }

    // Round Robin always picks the first task in the queue
    public Task pickNextTask() {
        return queue.get(0);
    }
}