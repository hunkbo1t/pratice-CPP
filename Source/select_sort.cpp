#include<iostream>
using namespace std;
//selection sort
int s_sort(int a[], int n);			//fun dec

int main(){
	int n,i,list[30];
	cout<<"Enter number of elements: ";			//getters
	cin>>n;				
	cout<<"\nEnter "<<n<<" elements: ";
	for(i=0;i<n;i++)
		cin>>list[i];
	s_sort(list,n);			//fun call
	cout<<"After sort: ";
	for(i=0;i<n;i++)
		cout<<list[i]<<" ";
	return 0;
}

s_sort(int a[], int n){			//fun def
	int i,j,temp,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}temp=a[i]; a[i]=a[min]; a[min]=temp;
		}
	}
}
