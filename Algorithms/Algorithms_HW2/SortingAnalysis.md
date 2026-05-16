## Summary

Using the HW1b time efficiency program, I compared **Insertion Sort** and **Merge Sort** across six datasets of increasing size of 1000, 10000, 100000, 250000, 500000 and 1000000.
The data that was recorded were execution time and number of comparisons. I've also attached the exact output of the process in sort_run.out.

---

## Analysis

The table below summarizes the measured results:

| Dataset        | Insertion Time (s) | Insertion Comparisons | Merge Time (s) | Merge Comparisons |
|----------------|-------------------:|----------------------:|---------------:|------------------:|
| rand1000.txt   | 0.0343             | 247,366               | 0.0025         | 8,713             |
| rand10000.txt  | 3.4814             | 24,992,745            | 0.0337         | 120,462           |
| rand100000.txt | 371.8250           | 2,505,319,309         | 0.4128         | 1,536,307         |
| rand250000.txt | 2380.3074          | 15,645,054,948        | 1.1485         | 4,168,028         |
| rand500000.txt | 9212.3105          | 62,476,143,445        | 2.4034         | 8,836,552         |
| rand1000000.txt| 38551.5475         | 249,926,868,099       | 5.2667         | 18,673,054        |

---

### Verification

To verify that these values that indeed what we would expect, I computed the following ratios:-

- **Insertion Sort:** T/n^2
- **Merge Sort:** T/nlogn
  
The T here is the measured runtime of the algorithm on an input of size n.

If the algorithm truly follows the theoretical complexity, these ratios should remain roughly **constant** as \(n\) increases.

| Dataset        | n       | Insertion Time (s) | T / n²        | Merge Time (s) | T / (n log n)   |
|----------------|---------|-------------------:|--------------:|---------------:|----------------:|
| rand1000.txt   | 1,000   | 0.0343             | 3.43e-08      | 0.0025         | 2.51e-07        |
| rand10000.txt  | 10,000  | 3.4814             | 3.48e-08      | 0.0337         | 2.54e-07        |
| rand100000.txt | 100,000 | 371.8250           | 3.72e-08      | 0.4128         | 2.49e-07        |
| rand250000.txt | 250,000 | 2380.3074          | 3.81e-08      | 1.1485         | 2.56e-07        |
| rand500000.txt | 500,000 | 9212.3105          | 3.68e-08      | 2.4034         | 2.54e-07        |
| rand1000000.txt| 1,000,000| 38551.5475        | 3.86e-08      | 5.2667         | 2.64e-07        |

---

### Observations
- **Insertion Sort:**  
  - The ratio T/n^2 stays near **3.7 × 10⁻⁸** across all datasets, confirming quadratic O(n^2) behavior.  
- **Merge Sort:**  
  - The ratio T/nlogn stays near **2.5 × 10⁻⁷**, showing stable linearithmic O(nlogn) performance.  
- This consistency verifies that the measured results align perfectly with the expected theoretical models.

---

### Conclusion
- Insertion Sort scales as O(n^2), becoming impractical for large datasets (taking over **10 hours** on one million elements).  
- Merge Sort scales as O(n log n), remaining efficient and practical even at one million elements.  
- The theoretical ratios validate the experimental measurements, confirming that **Merge Sort is the superior algorithm for scalability**. 5 seconds vs 10 hours is insane!!

