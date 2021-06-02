#include <iostream>
using namespace std;
class Node {
	public:
   int data;
   Node *next;
};
class list{
	Node* front = NULL;
	Node* rear = NULL;
	Node* temp;
	public:
		void Insert();
		void Delete();
		void Display();
};

void list:: Insert() {
   int val;
   cout<<"\nInsert the element in queue : "<<endl;
   cin>>val;
   if (rear == NULL) {
      rear = new Node;
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=new Node;
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}
void list:: Delete() {
   temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      delete(front);
      front = temp;
   } else {
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      delete(front);
      front = NULL;
      rear = NULL;
   }
}
void list:: Display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main() {
   int ch;
   list l;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: l.Insert();
         break;
      case 2: l.Delete();
         break;
      case 3: l.Display();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}
