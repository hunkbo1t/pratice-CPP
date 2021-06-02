#include<iostream>
using namespace std;
//Recursive Linear
int Rec_Lsearch(int list[],int n, int key);

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
	
	pos=Rec_Lsearch(list,n,key);		//fun cal
	if(pos==-1){
			cout<<"\nElement not found.";
		}else{
			cout<<"\nElement found at "<< pos<<" index value.";
		}
	}

int Rec_Lsearch(int list[], int n, int key){		//fun def
	if(n<=0){
		return -1;
	}else if(list[n]==key){
		return n;
		}else{
		return Rec_Lsearch(list,n-1,key);		//recursive fun cal
	}
}

