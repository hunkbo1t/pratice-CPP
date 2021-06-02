#include<iostream>
using namespace std;

class Stack{
	int stack[100],n=100,top=-1;
	public:
		void push(int val);
		void pop();
		void putdata();
		void getdata();
};
void Stack::push(int val){ 
	if(top>=n-1)
		cout<<"Stack Overflow!\n";
	else
		top++; stack[top]=val;
}

void Stack::pop(){
	if(top<=-1)
		cout<<"Stack Underflow!\n";
	else
		cout<<stack[top]<<" is been popped.\n"; top--;
}

void Stack::putdata(){
	if(top>=0){
		cout<<"Elements are: ";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}else{
		cout<<"Stack empty!\n";
	}
}

void Stack::getdata(){
	int ch,val;
	cout<<"\n1]Push\t2]Pop\t3]Display\t4]Exit\n";
	do{
		cout<<"\nEnter choice: ";
			cin>>ch;
	switch(ch){
		case 1:
			cout<<"\nEnter a value: ";
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
			cout<<"\nExit the menu.\n";
			break;
		default:
			cout<<"\nInvalid choice!\n";
	}
	}while(ch!=4);
	
}
int main(){
	Stack s;
	s.getdata();
	return 0;
}


