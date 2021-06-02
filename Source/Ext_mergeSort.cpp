#include<iostream>
using namespace std;
//merge sort

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left arrays nl
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //size of right arrays nr
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = j = 0; k = l;
   //merge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i++];
      }else{
         array[k] = rarr[j++];
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k++] = larr[i++];
   }
   while(j<nr) {     //extra element in right array
      array[k++] = rarr[j++];
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main() {
   int n,arr[20];
   cout << "Enter the number of elements: ";
   cin >> n;
   cout << "Enter "<<n<<" elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   for(int i=0; i<n; i++){
   		cout<<arr[i]<<" ";
   }
}
