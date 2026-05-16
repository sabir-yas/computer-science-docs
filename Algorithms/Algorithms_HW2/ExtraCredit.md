### 1) Plateau-Valley Array Using Quickselect

I'm going to use Quickselect because sorting would lead us to O(n log n), but we can make it O(n) by using Quickselect.

Algorithm using Quickselect  
1. Find the median of the array using Quickselect, dividing the array into two halves. One half has numbers smaller than the median. The other half has numbers larger than the median.  
1. Place numbers from the left half (smaller elements) in even indices.  
2. Place numbers from the right half (larger elements) in odd indices.  
3. This ensures every even index has a smaller element and every odd index has a larger element. This gives the up-and-down variance, also known as the plateau-valley property.

---

### 2) High-Level Solution to the IRS Problem

1. Organize the taxpayer's reported income in one array and the income reported by third parties in another array.  
   - An index from the taxpayer's array matches the index in the third-party array.  
2. Compute discrepancies:  
   - discrepancy[i] = third_party[i] - reported[i]  
   - This is O(n) since it’s just a pass through the arrays.  
3. Use Quickselect to find the top k largest discrepancies.  
   - This keeps the time complexity at O(n) on average.  
And that way find who is underreporting their incomes!
