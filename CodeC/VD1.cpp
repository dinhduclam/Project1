//So sanh toc do cua BUBBLE SORT va SELECTION SORT
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* generateArray(int n){
    int* list = (int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(int i=0; i<n; i++)
        list[i] = rand();
    return list;
}
void swap(int &a, int &b){
	int tmp = a; 
	a = b; 
	b = tmp;
}

int main(){
	clock_t begin, end;
	float time_spend = 0;
	int n = 10;	
	printf("BUBBLE SORT:\n");
	for (int k = 1; k <= 4; k++){
		n *= 10;
		int *a = generateArray(n);
		
		begin = clock();
		//bubble sort
		for (int i=0; i<n; i++)
			for (int j=0; j<n-i-1; j++)
				if (a[j] > a[j+1]) swap(a[j], a[j+1]);
		end = clock();
		time_spend = (float) (end - begin) / CLOCKS_PER_SEC;
		printf(" n = %d thi thoi gian chay la %f micro seconds\n", n, time_spend * 1e6);	
		delete a;
	}
	n = 10;
	printf("SELECTION SORT:\n");
	for (int k = 1; k <= 4; k++){
		n *= 10;
		int *a = generateArray(n);
		
		begin = clock();
		//selection sort
		for (int i=0; i<n; i++){
			int min_idx = i;
			for (int j=i+1; j<n; j++)
				if (a[min_idx] > a[j]) min_idx = j;
			swap (a[min_idx], a[i]);
		}
		end = clock();
		time_spend = (float) (end - begin) / CLOCKS_PER_SEC;
		printf(" n = %d thi thoi gian chay la %f micro seconds\n", n, time_spend * 1e6);	
		delete a;
	}
	
	
}
