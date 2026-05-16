'''
Author: Yaseer Sabir
Date: 9/26/2025
Program: Insertion Sort and Merge Sort Comparison.
This program compares the efficiency of Insertion Sort and Merge Sort
using datasets of different sizes. It measures both execution time and
the number of element-to-element comparisons, then generates plots.
'''

#We will need both time and matplotlib libraries.
import time
import matplotlib.pyplot as plt

# Global counters to track the number of element comparisons
# These are updated inside the sorting functions.
insertion_comparisons = 0
merge_comparisons = 0

# Function: timeEfficiency
# Purpose: Wraps another function to measure its execution time.
# Input: function name and its arguments
# Output: (elapsed_time_in_seconds, function_result)
def timeEfficiency(funcName, *args, **kwargs):
    start = time.process_time()            # Record CPU time at start
    result = funcName(*args, **kwargs)     # Execute the sorting function
    end = time.process_time()              # Record CPU time at end
    efficiency = end - start               # Calculate total CPU time used
    return efficiency, result              # Return time and the sorted result

# Function: insertion_sort
# Purpose: Implements the Insertion Sort algorithm.
# Logic: Iteratively builds a sorted subarray by inserting each element
#        into its correct position relative to previously sorted elements.
# Complexity: Best case O(n), average/worst case O(n^2).
def insertion_sort(arr):
    global insertion_comparisons
    insertion_comparisons = 0              # Reset comparison counter
    arr = arr.copy()                       # Copy to avoid modifying original data
    
    for i in range(1, len(arr)):           # Iterate over all elements starting from index 1
        key = arr[i]                       # Current element to insert into sorted part
        j = i - 1
        # Compare key with each element in the sorted subarray
        while j >= 0:
            insertion_comparisons += 1     # Count every comparison made
            if key < arr[j]:
                arr[j + 1] = arr[j]        # Shift larger element one position to the right
                j -= 1                     # Move backward in sorted portion
            else:
                break                      # Stop once key is greater than current element
        arr[j + 1] = key                   # Place key at the correct position
    return arr

# Function: merge_sort
# Purpose: Implements the Merge Sort algorithm (recursive).
# Logic: Divide-and-conquer:
#        - Split array into halves
#        - Recursively sort each half
#        - Merge the two sorted halves
# Complexity: Always O(n log n).
def merge_sort(arr):
    global merge_comparisons
    if len(arr) <= 1:                      # Base case: arrays with 0 or 1 element are already sorted
        return arr
    mid = len(arr) // 2                    # Split array in half
    left = merge_sort(arr[:mid])           # Recursively sort left half
    right = merge_sort(arr[mid:])          # Recursively sort right half
    return merge(left, right)              # Merge the two sorted halves

# Function: merge
# Purpose: Merges two sorted arrays into a single sorted array.
# Input: two sorted arrays (left, right)
# Output: merged sorted array
def merge(left, right):
    global merge_comparisons
    result = []                            # Store merged result
    i = j = 0                              # Pointers for left and right arrays
    
    # Compare elements until one of the arrays is exhausted
    while i < len(left) and j < len(right):
        merge_comparisons += 1             # Count each comparison made
        if left[i] <= right[j]:
            result.append(left[i])         # Append smaller element
            i += 1
        else:
            result.append(right[j])
            j += 1
    # Append any leftover elements (since they are already sorted)
    result.extend(left[i:])
    result.extend(right[j:])
    return result

# Datasets: List of input files containing random integers.
# These represent different input sizes (from 1k to 1 million elements).
fileNames = [
    "rand1000.txt",
    "rand10000.txt",
    "rand100000.txt",
    "rand250000.txt",
    "rand500000.txt",
    "rand1000000.txt"
]

# Lists to store performance metrics across all datasets
insertion_times, merge_times = [], []      # Execution times
insertion_ops, merge_ops = [], []          # Number of comparisons

# Main experiment loop: Run both algorithms on all datasets
for name in fileNames:
    print(f"\nProcessing {name}...")

    # Step 1: Load dataset into memory (convert all numbers to integers)
    with open(name, "r") as f:
        data = [int(x) for x in f.read().split()]

    # Step 2: Run Insertion Sort
    ins_time, _ = timeEfficiency(insertion_sort, data)   # Time the sort
    insertion_times.append(ins_time)                     # Save runtime
    insertion_ops.append(insertion_comparisons)          # Save comparison count
    print(f"InsertionSort - time: {ins_time:.4f}s, comparisons: {insertion_comparisons}")

    # Step 3: Run Merge Sort
    merge_comparisons = 0                                # Reset counter
    mrg_time, _ = timeEfficiency(merge_sort, data)       # Time the sort
    merge_times.append(mrg_time)                         # Save runtime
    merge_ops.append(merge_comparisons)                  # Save comparison count
    print(f"MergeSort - time: {mrg_time:.4f}s, comparisons: {merge_comparisons}")

# Plot 1: Execution Times of Insertion Sort vs Merge Sort
plt.figure(figsize=(10,6))
plt.plot(fileNames, insertion_times, marker='o', label="Insertion Sort")
plt.plot(fileNames, merge_times, marker='o', label="Merge Sort")
plt.xlabel("Dataset")                       # X-axis: dataset name
plt.ylabel("Execution Time (s)")            # Y-axis: execution time in seconds
plt.title("Sorting Algorithm Execution Times")
plt.legend()
plt.grid(True)
plt.savefig("runtime_comparison.png")       # Save plot as image

# Plot 2: Number of Comparisons of Insertion Sort vs Merge Sort
plt.figure(figsize=(10,6))
plt.plot(fileNames, insertion_ops, marker='o', label="Insertion Sort Comparisons")
plt.plot(fileNames, merge_ops, marker='o', label="Merge Sort Comparisons")
plt.xlabel("Dataset")                       # X-axis: dataset name
plt.ylabel("Number of Comparisons")         # Y-axis: count of comparisons
plt.title("Sorting Algorithm Comparisons")
plt.legend()
plt.grid(True)
plt.savefig("comparison_counts.png")        # Save plot as image

# Final output after experiments and plots are generated
print("\nResults saved as runtime_comparison.png and comparison_counts.png")
