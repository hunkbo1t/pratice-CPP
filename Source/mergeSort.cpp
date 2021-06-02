#include<iostream>
using namespace std;
//inline int swap(int *a, int *b) {     //swap the content of a and b
//   int temp=*a;*a=*b;*b=temp;
//}

int merge(int a[], int p, int q, int r) {
   int i, j, k, nl, nr;
   //size of left arrays = nl
   //size right arrays = nr
   nl = q-q+1; 
   nr = r-q;
   int L[nl], R[nr];
   
   for(i = 0; i<nl; i++)		//init left arr
      L[i] = a[p+i];
      
   for(j = 0; j<nr; j++)		//init right arr
      R[j] = a[q+1+j];
      
   i = j = 0;
   //merge temp arrays to real array
   for(k=p;i < nl && j<nr;k++){
      if(L[i] <= R[j]) {
         a[k] = L[i++];
      }else{
         a[k] = R[j++];
      }
   }
   while(i<nl){       //extra element in left array
      a[k++] = L[i++];
   }
   while(j<nr){     //extra element in right array
      a[k++] = R[j]++;
    }
}
void mergeSort(int a[], int p, int r){
   if(p < r){
      int q = (p+r-1)/2;
      // Sort first and second arrays
      mergeSort(a, p, q);
      mergeSort(a, q+1, r);
      merge(a, p, q, r);
   }
}
int main(){
   int n,a[30];
   cout << "Enter the number of elements: ";
   cin >> n;     
   cout << "Enter "<<n<<" elements: ";
   for(int i = 0; i<n; i++)
      cin >> a[i];
   mergeSort(a, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   for(int i = 0; i<n; i++)
      cout << a[i];
}
