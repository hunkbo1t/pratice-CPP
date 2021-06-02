#include<iostream>
using namespace std;
//insertion sort
int ins_sort(int a[], int n);			//fun dec

int main(){
	int n,i,list[30];
	cout<<"Enter number of elements: ";			//getters
	cin>>n;				
	cout<<"\nEnter "<<n<<" elements: ";
	for(i=0;i<n;i++){
		cin>>list[i];
	}
	ins_sort(list,n);			//fun call
	cout<<"After sort: ";
	for(i=0;i<n;i++){
		cout<<list[i]<<" ";
	}return 0;
}

ins_sort(int a[], int n){			//fun def
	int i,temp,pos;
	for(i=0;i<n;i++){
		temp=a[i];
		pos=i;
		while(pos>0 && a[pos-1]>temp){
			a[pos]=a[pos-1];
			pos--;
		}a[pos]=temp;
	}
}
