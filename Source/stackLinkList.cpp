#include <iostream>
using namespace std;
//stack using linkList
class Node { 
	public:   
	int data; Node *next;
}; 
class Stack{
	Node *top; int val;
	public:
		Stack(){top = NULL;}
		void push();
		void pop();
		void display();
};

void Stack:: push() {
   Node *nn;
   cout<<"Enter value to be pushed:"<<endl;
            cin>>val; 
   nn=new Node;
   nn->data = val; 
   nn->next = top; 
   top = nn;
   cout<<"\nElement inserted.\n";
}
void Stack:: pop() {
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void Stack:: display() {
   Node* ptr;
   if(top==NULL)
      cout<<"Stack is empty!";
   else {   
      ptr = top; 
      cout<<"Stack elements are: ";
      while (ptr != NULL) { 
         cout<< ptr->data <<"|"; 
         ptr = ptr->next; 
      } 
   }
   cout<<endl;
}
int main() {
   int ch, val; 
   Stack l;
   cout<<"\n1) Push in stack\t2) Pop from stack\t3) Display stack"<<endl;
   cout<<"4) Exit\n";
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:   
            l.push();
            break;
            
         case 2: 
            l.pop();
            break;

         case 3: 
            l.display();
            break;
        
         case 4: 
            cout<<"Exit"<<endl;
            break;
         
         default: 
            cout<<"Invalid Choice"<<endl;
         
      }
   }while(ch!=4); 
      return 0;
}  
