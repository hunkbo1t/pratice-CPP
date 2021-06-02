#include <iostream> 
using namespace std; 

class QNode { 
	public:	int data; 
	QNode* next; 
	QNode(int d){ data = d; next = NULL; } 
}; 

class Queue { 
	public:
	QNode *front, *rear, *temp; 
	Queue(){ front = rear = NULL; } 
	void enQueue(int x); void deQueue();
	//utility members
	void putQueue(); void getQueue(Queue q);
}; 
void Queue::enQueue(int x) {  
		QNode* temp = new QNode(x); 
		if (rear == NULL) { 
			front = rear = temp; 
			return; } 
		rear->next = temp; 
		rear = temp; }
void Queue::deQueue() {
	if (front == NULL){ cout<<"\nQueue underflow\n"; return; } 
		QNode* temp = front; 
		front = front->next; 
	if (front == NULL) 
			rear = NULL; 
		delete (temp); }
void Queue::putQueue(){
	if (front == NULL){ cout<<"\nQueue underflow\n"; return;
	}else{
		temp=front;
		while(temp!=NULL){
			cout<<temp->data<<"|"; temp=temp->next;
		} } } 
void Queue::getQueue(Queue q){
		int ch, data;
	cout<<"\n1]enQueue 2]deQueue 3]putQueue 4]Exit :";
	do{
		cout<<"\nEnter choice: "; cin>>ch;
		switch(ch){
			case 1: cout<<"\nEnter data: "; cin>>data;
					q.enQueue(data); break;
			case 2: q.deQueue();
					cout<<"\nRear after deQueue: ";
					q.putQueue(); break;
			case 3: q.putQueue(); break;
			case 4: exit(1); break;
			default : cout<<"\nTry again\n"; break;
	} }while(ch!=4); }
int main() { 
	Queue q; 
	q.getQueue(q);
} 

