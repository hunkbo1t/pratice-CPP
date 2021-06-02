#include<iostream>
using namespace std;
//Recursive Binary
int Rec_BinarySearch(int list[],int key,int lw, int hi);

int main(){
	int i,n,key,list[25],pos;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements in ascending order: ";			//getters
	for(i=0;i<n;i++){
	cin>>list[i];
	}
	cout<<"\nEnter key: ";			//key
	cin>>key;
	
	pos=Rec_BinarySearch(list,key,0,n-1);			//fun cal
	if(pos==-1){
			cout<<"\nElement not found.";
		}else{
			cout<<"\nElement found at "<< pos<<" index value.";
		}
	}

int Rec_BinarySearch(int list[], int key, int lw, int hi){		//fun def
	int mid;
	if(lw>hi) return -1;
	mid=(hi+lw)/2;		//mid
	if(list[mid]==key){		//mid comp
		return mid;
	}else if(key<list[mid]){
		return Rec_BinarySearch(list,key,lw,mid-1);			//updating upper bound
	}else{
		return Rec_BinarySearch(list,key,mid+1,hi);			////updating lower bound
	}
}


