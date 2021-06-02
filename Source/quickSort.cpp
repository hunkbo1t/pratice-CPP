#include<iostream>
using namespace std;
//utility to swapp two items
void swap(int *a, int *b){
	int t=*a;*a=*b;*b=t;
}
/*QuickSort*/
int part (int a[], int lw, int hi) { 
	int pivot = a[hi]; // pivot 
	int i = (lw - 1); // Index of smaller element 

	for (int j = lw; j <= hi- 1; j++){ 
		// If current element is smaller than or 
		// equal to pivot 
		if (a[j] <= pivot){ 
			i++; // increment index of smaller element 
			swap(&a[i], &a[j]); 
		} 
	}
	swap(&a[i + 1], &a[hi]); 
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(int a[], int lw, int hi) { 
	if (lw < hi){ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = part(a, lw, hi); 

		// Separately sort elements before 
		// partition and after partition 
		quickSort(a, lw, pi - 1); 
		quickSort(a, pi + 1, hi); 
	} 
} 

/* Function to print an array */
void printArray(int a[], int size) { 
	int i; 
	for (i=0; i < size; i++) 
		cout<<"\t "<<a[i];  
} 

// Driver program to test above functions 
int main() { 
	int a[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(a)/sizeof(a[0]); 
	quickSort(a, 0, n-1); 
	cout<<"Sorted array: n"; 
	printArray(a, n); 
	return 0; 
} 

