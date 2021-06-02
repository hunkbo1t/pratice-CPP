#include<iostream>
using namespace std;
//Non-Recursive linear
int Lsearch(int list[],int n, int key);

int main(){
	int i,n,key,list[25],pos;
	cout<<"Enter number of elements: ";		//getter
	cin>>n;
	cout<<"\nEnter "<<n<<" elements: ";
	for(i=0;i<n;i++){
	cin>>list[i];
	}
	cout<<"\nEnter key: ";		//key
	cin>>key;
	
	pos=Lsearch(list,n,key);		//fun call
	if(pos==-1){
			cout<<"\nElement not found.";
		}else{
			cout<<"\nElement found at "<< pos<<" index value.";
		}
	}

int Lsearch(int list[], int n, int key){		//fun def
	int i,pos=-1;
	for(i=0;i<n;i++){
		if(list[i]==key){
			pos=i;
			break;
		}
	}return pos;
	}	

