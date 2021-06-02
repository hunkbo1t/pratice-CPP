#include<iostream>
using namespace std;
//utility class
class Node { public: int data; Node *next; }; 
//stack-Link-list
class Stack{
	Node *top; int val;
	public:
		Stack(){top = NULL;}
		void push(); void pop();
		//utility members
		void putStack(); void getStack();
};
void Stack:: push() { 
		Node *nn;
   cout<<"Enter value to be pushed:"<<endl; cin>>val; 
   nn=new Node; nn->data = val; nn->next = top; 
   top = nn; cout<<"\nElement inserted.\n"; }
void Stack:: pop() {
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next; } }
void Stack:: putStack() {
   		Node* ptr;
   if(top==NULL){ cout<<"Stack is empty!"; }
      else { ptr = top; cout<<"Stack elements are: ";
      while (ptr != NULL) { cout<< ptr->data <<"|"; ptr = ptr->next; } }
   cout<<endl; }
void Stack::getStack() {
		int ch, val; 
   cout<<"\n1) Push in stack 2) Pop from stack 3) Display stack"<<endl;
   cout<<"4) Exit\n";
   do { cout<<"Enter choice: "; cin>>ch;
      switch(ch) {
         case 1: push(); break;
         case 2: pop(); break;
         case 3: putStack(); break;
         case 4: cout<<"Exit"<<endl; break;
         default: cout<<"Invalid Choice"<<endl; }
   }while(ch!=4); }
//Queue-link-list
class Que{
		Node* front = NULL; Node* rear = NULL; Node* temp;
	public:
		void Insert(); void Delete();
		//utility members
		void putQue(); void getQue();
};
void Que:: Insert() {
   		int val;
   cout<<"\nInsert the element in queue : "; cin>>val;
   if (rear == NULL) {
      rear = new Node; rear->next = NULL;
      rear->data = val; front = rear;
   }else { temp=new Node; rear->next = temp;
      temp->data = val; temp->next = NULL;
      rear = temp; } }
void Que:: Delete() {
   		temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl; return; 
	}else if (temp->next != NULL) { temp = temp->next;
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      delete(front); front = temp;
   	}else{ cout<<"Element deleted from queue is : "<<front->data<<endl;
      delete(front); front = NULL; rear = NULL; } }
void Que:: putQue() {
   		temp = front;
   if ((front == NULL) && (rear == NULL)) {
   		cout<<"Queue is empty"<<endl; return; }
   		cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" "; temp = temp->next;
   }cout<<endl; }
void Que::getQue(){
		int ch;
   cout<<"1) Insert element to queue ";
   cout<<"2) Delete element from queue ";
   cout<<"3) Display all the elements of queue ";
   cout<<"4) Exit"<<endl;
do { cout<<"Enter your choice : "; cin>>ch;
   switch (ch) {
      case 1: Insert(); break;
      case 2: Delete(); break;
      case 3: putQue(); break;
      case 4: cout<<"Exit"<<endl; break;
      default: cout<<"Invalid choice"<<endl;
   } } while(ch!=4); }   
class StructLL:public Stack , public Que{ };
int main(){
	StructLL s; int ch;
	do{ cout<<"\nEnter choice: 1]Stack 2]Queue 3]Quit : "; cin>>ch;
				switch(ch){
					case 1: s.getStack(); break;
					case 2: s.getQue(); break;
					case 3: cout<<"Exit loop."; exit(1); break;
					default: cout<<"\nWrong choice\n"; } }while(ch!=3);
				return 0; }
