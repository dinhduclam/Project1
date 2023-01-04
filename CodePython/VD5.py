# Merge sort

def merge(arr, left, mid, right):
    leftArrayLength = mid - left + 1
    rightArrayLength = right - mid

    leftArray = [0] * leftArrayLength
    rightArray = [0] * rightArrayLength

    for i in range(leftArrayLength):
        leftArray[i] = arr[left + i]
    for j in range(rightArrayLength):
        rightArray[j] = arr[mid + 1 + j]

    indexOfLeftArray = 0
    indexOfRightArray = 0
    indexOfMergedArray = left

    while indexOfLeftArray < leftArrayLength and indexOfRightArray < rightArrayLength:
        if leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray]:
            arr[indexOfMergedArray] = leftArray[indexOfLeftArray]
            indexOfLeftArray += 1
        else:
            arr[indexOfMergedArray] = rightArray[indexOfRightArray]
            indexOfRightArray += 1
        indexOfMergedArray += 1

    while indexOfLeftArray < leftArrayLength:
        arr[indexOfMergedArray] = leftArray[indexOfLeftArray]
        indexOfLeftArray += 1
        indexOfMergedArray += 1

    while indexOfRightArray < rightArrayLength:
        arr[indexOfMergedArray] = rightArray[indexOfRightArray]
        indexOfRightArray += 1
        indexOfMergedArray += 1

def mergeSort(arr, begin, end):
    if begin >= end:
        return

    mid = int(begin + (end - begin) / 2)
    mergeSort(arr, begin, mid)
    mergeSort(arr, mid + 1, end)
    merge(arr, begin, mid, end)

def main():
    arr = [12, 11, 13, 5, 6, 7]
    arr_size = len(arr)
    print("Given array is", arr)
    mergeSort(arr, 0, 5)
    print("Sorted array is", arr)

if __name__ == "__main__":
    main()