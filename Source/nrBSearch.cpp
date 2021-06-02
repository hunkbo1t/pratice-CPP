#include<iostream>
using namespace std;
//Non-recursive Binary
int BinarySearch(int list[], int key,int lw, int hi);

int main(){
	int i,n,key,list[25],pos;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements in ascending order: ";		//getters
	for(i=0;i<n;i++){
	cin>>list[i];
	}
	cout<<"\nEnter key: ";		//key
	cin>>key;
	
	pos=BinarySearch(list,key,0,n-1);		//fun cal
	if(pos==-1){
			cout<<"\nElement not found.";
		}else{
			cout<<"\nElement found at "<< pos<<" index value.";
		}
	}

int BinarySearch(int list[], int key,int lw, int  hi){		//fun def
	int mid;
	if(lw>hi) return -1;
	mid=(lw+hi)/2;		//mid
	if(key==list[mid]){
		return mid;			//mid comp
		//return pos;
	}else if(key<list[mid]){
		hi=mid-1;		//update upperBound
	}else{
		lw=mid+1;		//update lowerBound
	}
}

