//function pointer

#include <bits/stdc++.h>
using namespace std;
void swap (int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
bool ascending(int left, int right){
   return left > right;
}
bool descending(int left, int right){
   return left < right;
}
void selectionSort(int *arr, int length, bool (*compare)(int, int)){
   for (int i_start = 0; i_start < length; i_start++) {
      int minIndex = i_start;
      for (int i_current = i_start + 1; i_current < length; i_current++){
        if (compare(arr[minIndex], arr[i_current]))    {
           minIndex = i_current;
        }
      }
      swap(arr[i_start], arr[minIndex]);
   }
}
int main() {
   int arr[] = { 1, 4, 2, 3, 6, 5, 8, 9, 7 };
   int length = sizeof(arr) / sizeof(int);
   cout << "Before sorted: ";
   for (int i=0; i<length; i++) printf("%d ", arr[i]); printf("\n");
   selectionSort(arr, length, &descending);
   cout << "After sorted:  ";
   for (int i=0; i<length; i++) printf("%d ", arr[i]); printf("\n");
   return 0;
}

