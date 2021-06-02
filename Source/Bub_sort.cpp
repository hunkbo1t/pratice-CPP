#include<iostream>
using namespace std;
//Bubble sort
int Bub_sort(int a[], int n);			//fun dec
inline int swap(int *a, int *b) {      //swap the content of a and b
   int temp=*a;*a=*b;*b = temp;
}

int main(){
	int n,i,list[30];
	cout<<"Enter number of elements: ";			//getters
	cin>>n;				
	cout<<"\nEnter "<<n<<" elements: ";
	for(i=0;i<n;i++){
		cin>>list[i];
	}
	Bub_sort(list,n);			//fun call
	cout<<"After sort: ";
	for(i=0;i<n;i++){
		cout<<list[i]<<" ";
	}return 0;
}

Bub_sort(int a[], int n){			//fun def
	int i,j;
	for(int i = 0; i<n; i++){
      for(int j = 0; j<n-i-1; j++){
         if(a[j] > a[j+1]) {      	 //when the current item is bigger than next
            swap(a[j], a[j+1]);
         }
      }
    }
}

   

