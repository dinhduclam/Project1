import random
import time


def generateArray(n):
    lst = []
    for i in range(n):
        lst.append(random.randrange(1, 10 ** 9))
    return lst


print("BUBBLE SORT:")
for k in range(1, 5):
    n = 10 ** k
    a = generateArray(n)

    start_time = time.time()
    for i in range(n):
        for j in range(n - i - 1):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
    end_time = time.time()

    print(f"n = {n} thi thoi gian chay la {(end_time - start_time) * 1e6} micro seconds");

print("\nSELECTION SORT:")
for k in range(1, 5):
    n = 10 ** k
    a = generateArray(n)

    start_time = time.time()
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if a[min_idx] > a[j]:
                min_idx = j
        a[min_idx], a[i] = a[i], a[min_idx]
    end_time = time.time()

    print(f"n = {n} thi thoi gian chay la {(end_time - start_time) * 1e6} micro seconds");
