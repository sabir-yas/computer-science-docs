import random

print("Question 1")
#binary search
print("Step 1")
print("-"*40)
random_integer = random.randint(1, 1000)
l, r = 1, 1000
count = 0
while True:
    mid = (l + r) // 2
    if mid == random_integer:
        count+=1
        print("I've guessed the number!")
        print(f"I've made {count} guesses to get it.")
        break
    elif mid < random_integer:
        l = mid + 1
        count += 1
    else:
        r = mid - 1
        count += 1
print("-"*40)        
print("\nStep 2")
print("-"*40)
count2=0
for i in range(10000):
    random_integer = random.randint(1, 1000)
    l, r = 1, 1000
    count = 0
    while True:
        mid = (l + r) // 2
        count += 1
        if mid == random_integer:
            break
        elif mid < random_integer:
            l = mid + 1
        else:
            r = mid - 1
    count2 += count
print(f"1. The random numbers between 1 .. 1K: Total guesses: {count2} Avg: {count2 / 10000}")

print("-"*40)
print("\nStep 3")
print("-"*40)
count2=0
for i in range(10000):
    random_integer = random.randint(1, 1000000)
    l, r = 1, 1000000
    count = 0
    while True:
        mid = (l + r) // 2
        count += 1
        if mid == random_integer:
            break
        elif mid < random_integer:
            l = mid + 1
        else:
            r = mid - 1
    count2 += count
print(f"2. The random numbers between 1 .. 1M: Total guesses: {count2} Avg: {count2 / 10000}")
print("-"*40)
print("-"*40)