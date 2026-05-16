/**
 * Non-preemptive priority scheduling algorithm.
 *
 * A higher numerical priority indicates a higher relative priority.
 */
 
import java.util.*;

//IMPLEMENT THE PRIORITY ALGORITHM BELOW
//TAKE A LOOK AT PRIORITYRR.JAVA TO SEE WHAT YOU CAN REUSE HERE
public class Priority implements Algorithm
{
    private List<Task> queue;
    private Task currentTask;

    public Priority(List<Task> queue) {
        this.queue = queue;
    }
    
    public void schedule() {
        System.out.println("Priority Scheduling \n");

        while (!queue.isEmpty()) {
            currentTask = pickNextTask();
            
            CPU.run(currentTask, currentTask.getBurst());

            // remove the task
            queue.remove(currentTask);
        }
    }

    public Task pickNextTask() {
        int highestIndex =0;
        Task highestTask = queue.get(highestIndex);
        int highestPriority = highestTask.getPriority();

        for( int i = 1; i < queue.size(); i++) {
            if (queue.get(i).getPriority() > highestPriority) {
                highestIndex = i;
                highestPriority = queue.get(i).getPriority();
            }
        }
        highestTask = queue.get(highestIndex);
        return highestTask;
    }

}
