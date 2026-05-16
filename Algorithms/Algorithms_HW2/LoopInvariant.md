1) **General Description**  
The loop invariant technique is a way to prove that a loop works correctly even before we try to see how it works. It has a couple of steps. The first step is to find a condition that is true even before the loop starts. The next step is to see that it stays true even after every single iteration. Finally, the last step is to see that the condition stays true even when the loop ends. Through these steps, we can say that the algorithm is correct.

2) **Loop Invariant**  
At the start of each iteration of the while loop, the array result contains the sorted merge of the subarrays left[0:i] and right[0:j].

3) **Initialization step**  
result = [] contains the merge of left[0:0] and right[0:0], which are both empty. The merge of two empty arrays is trivially sorted. Thus, the invariant is true at the initialization step.

4) **Maintenance step**  
After any iteration we pick the next element from either left[i] or right[j]. We compare left[i] and right[j] to decide which is smaller. If left[i] <= right[j], we append left[i] to result and increment i; otherwise, we append right[j] to result and increment j.  
Since we are always appending the smaller of the two candidates, we know that every element already in result is less than or equal to the newly added element. Therefore, result continues to represent the sorted merge of left[0:i] and right[0:j].  
Thus, the loop invariant holds at this step as well.

5) **Termination step**  
Once we go through the last iteration of the loop, we will reach the case where either i = len(left) or j = len(right). This means one of the subarrays is fully traversed, and the loop breaks. However, the other index still points to the remaining elements of its subarray. By the loop invariant, result already contains the sorted merge of left[0:i] and right[0:j]. At this point, adding the remaining elements from the unfinished subarray which are already sorted gives us that result is the sorted merge of all elements in left[0:len(left)] and right[0:len(right)].  
Therefore, when the loop terminates, result contains the completely sorted merge of both arrays.

