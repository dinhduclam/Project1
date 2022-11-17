
def ascending(a, b):
   return a > b

def descending(a, b):
   return a < b


def selectionSort(arr, length, comparePointer):
   for i in range(length):
      minIndex = i
      for j in range(i+1, length):
        if comparePointer(arr[minIndex], arr[j]):
           minIndex = j

      arr[minIndex], arr[i] = arr[i], arr[minIndex]


arr = [1, 4, 2, 3, 6, 5, 8, 9, 7]
length = len(arr)

print("Before sorted: ")
for i in range(length):
   print(arr[i], end=" ")
print()

selectionSort(arr, length, descending)

print("After sorted:  ")
for i in range(length):
   print(arr[i], end=" ")
print()