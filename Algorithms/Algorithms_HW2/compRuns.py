
'''
Author: Yaseer Sabir
Date: 9/26/2025
Program Name: Comparison of Running Times Calculator.
Description: This program computes the maximum input size n that can be processed within various time budgets for different computational complexities f(n).
The results are displayed in a table format.

'''
#we will be needing math and pandas libraries.
import math
import pandas as pd

# Step 1: Times in microseconds
second = 1_000_000
minute = 60 * second
hour   = 60 * minute
day    = 24 * hour
month  = 30 * day
year   = 365 * day
century = 100 * year

#arrays to store to store time labels and their corresponding values.
time_labels = ["1 second", "1 minute", "1 hour", "1 day", "1 month", "1 year", "1 century"]
time_values = [second, minute, hour, day, month, year, century]

#Step 2: Functions
def f_log(t):
    # Function for log n ≤ T → solve for n
    # Rearranging: n ≤ 2^T
    # Computing 2^T directly can overflow, so instead we represent it in base-10 scientific notation
    exponent = T * math.log10(2)   # log10(2^T) = T * log10(2)
    return f"10^{exponent:.2e}"    # Return as string like "10^3.01e+05" (scientific notation)

def f_sqrt(t):
    # Solve sqrt(n) ≤ T → n ≤ T^2
    return t**2

def f_linear(t):
    # Solve n ≤ T → n = T
    return t

def f_nlogn(t):
    # Solve n log n ≤ T using binary search
    lo, hi = 1, t
    while lo < hi:
        mid = (lo + hi + 1) // 2
        if mid * math.log2(mid) <= t:  # Check if mid satisfies constraint
            lo = mid                   # If yes, move lower bound up
        else:
            hi = mid - 1               # Otherwise, move upper bound down
    return lo  # Maximum n that satisfies n log n ≤ T

def f_n2(t):
    # Solve n^2 ≤ T → n ≤ sqrt(T)
    return int(math.isqrt(t))  # Integer square root (safe for large numbers)

def f_n3(t):
    # Solve n^3 ≤ T → n ≤ cbrt(T)
    return int(round(t ** (1/3)))

def f_2n(t):
    # Solve 2^n ≤ T → n ≤ log2(T)
    return int(math.log2(t))

def f_fact(t):
    # Solve n! ≤ T iteratively
    n, fact = 1, 1
    while fact <= t:
        n += 1
        fact *= n  # Keep multiplying until exceeding T
    return n - 1   # The last valid n before exceeding T


# Step 3: Build results
# Define a list of tuples where each tuple contains:
# - A string label for the function
# - A reference to the actual function implementation 
functions = [
    ("log n", f_log),
    ("sqrt(n)", f_sqrt),
    ("n", f_linear),
    ("n log n", f_nlogn),
    ("n^2", f_n2),
    ("n^3", f_n3),
    ("2^n", f_2n),
    ("n!", f_fact),
]

# This will hold the computed results for each function across different time values
results = []

# Loop over each function name and implementation
for fname, func in functions:
    print(f"Computing row for {fname}...")  # Display progress in console
    row = []  # Store results for the current function
    # Loop over a set of input values (time_values) and their corresponding labels
    for T, label in zip(time_values, time_labels):
        try:
            # Compute the function value at T
            value = func(T)
            # Append the result to the current row
            row.append(value)
        except OverflowError:
            # If the computation is too large (e.g., factorial of a big number),
            # record it as infinity ("∞") instead of crashing
            row.append("∞")
    # Add the completed row of results for this function to the results list
    results.append(row)


# Step 4: Build table
df = pd.DataFrame(results, columns=time_labels, index=[f[0] for f in functions])
print("\nFinal Results Table:")
pd.set_option("display.max_columns", None)  # this is to show all columns
pd.set_option("display.width", 200)     #this is to avoid line breaks 
print(df)
