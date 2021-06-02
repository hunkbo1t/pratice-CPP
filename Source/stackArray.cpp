#include<iostream>
using namespace std;
//Stack using array
int stack[100],n=100,top=-1;

void push(int val){
	if(top>=n-1)
		cout<<"Stack Overflow!\n";
	else
		top++; stack[top]=val;
}

void pop(){
	if(top<=-1)
		cout<<"Stack Underflow!\n";
	else
		cout<<stack[top]<<" is been popped.\n"; top--;
}

void putdata(){
	if(top>=0){
		cout<<"Elements are: ";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}else{
		cout<<"Stack empty!\n";
	}
}
int main(){
	int ch,val;
	cout<<"\n1]Push\t2]Pop\t3]Display\t4]Exit\n";
	do{
		cout<<"Enter choice: ";
			cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter a value: ";
				cin>>val;
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			putdata();
			break;
		case 4:
			cout<<"Exit the menu.";
			break;
		default:
			cout<<"Invalid choice!\n";
	}
	}while(ch!=4);
	return 0;
}
