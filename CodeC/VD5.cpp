// Merge sort

#include <iostream>
using namespace std;

void merge(int array[], int left, int mid, int right)
{
    int leftArrayLength = mid - left + 1;
    int rightArrayLength = right - mid;

    int *leftArray = new int[leftArrayLength],
         *rightArray = new int[rightArrayLength];

    for (int i = 0; i < leftArrayLength; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < rightArrayLength; j++)
        rightArray[j] = array[mid + 1 + j];

    int indexOfLeftArray = 0,
        indexOfRightArray = 0;
    int indexOfMergedArray = left;

    while (indexOfLeftArray < leftArrayLength
           && indexOfRightArray < rightArrayLength) {
        if (leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray]) {
            array[indexOfMergedArray] = leftArray[indexOfLeftArray];
            indexOfLeftArray++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfRightArray];
            indexOfRightArray++;
        }
        indexOfMergedArray++;
    }
    
    while (indexOfLeftArray < leftArrayLength) {
        array[indexOfMergedArray] = leftArray[indexOfLeftArray];
        indexOfLeftArray++;
        indexOfMergedArray++;
    }
    
    while (indexOfRightArray < rightArrayLength) {
        array[indexOfMergedArray] = rightArray[indexOfRightArray];
        indexOfRightArray++;
        indexOfMergedArray++;
    }
    
    delete[] leftArray;
    delete[] rightArray;
}


void mergeSort(int array[], int begin, int end)
{
    if (begin >= end)
        return; // Returns recursively

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
