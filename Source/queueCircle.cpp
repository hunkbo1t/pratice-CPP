#include<iostream>
using namespace std;
#define SIZE 10
// Circular Queue 

class Queue{  
	public:
	int rear; int front; int arr[]; 
	
	void enQueue(int value); 
	int deQueue(); 
	void getdata();
	void putdata(); 
}; 

void Queue::enQueue(int value) { 
	if ((front == 0 && rear == SIZE-1) || 
			(rear == (front-1)%(SIZE-1))){ 
		printf("\nQueue is Full"); 
		return; 
	}else if (front == -1){ 				 
		front = rear = 0; 
		arr[rear] = value; 
	}else if (rear == SIZE-1 && front != 0){ 
		rear = 0; 
		arr[rear] = value; 
	}else{ 
		rear++; 
		arr[rear] = value; 
	} 
} 
 
int Queue::deQueue() { 
	if (front == -1){ 
		printf("\nQueue is Empty");  
	} 
	int data = arr[front]; 
	arr[front] = -1; 
	if (front == rear){ 
		front = rear = -1; 
	}else if (front == SIZE-1) 
		front = 0; 
	else
		front++; 
	return data; 
} 

void Queue::putdata() { 
	if (front == -1){ 
		printf("\nQueue is Empty");
	} 
	printf("\nElements in Circular Queue are: "); 
	if (rear >= front){ 
		for (int i = front; i <= rear; i++) 
			printf("%d ",arr[i]); 
	}else{ 
		for (int i = front; i < SIZE; i++) 
			printf("%d ", arr[i]); 

		for (int i = 0; i <= rear; i++) 
			printf("%d ", arr[i]); 
	} 
} 

void Queue::getdata(){
	int ch,val;
	cout<<"\n1]Push\t2]Pop\n3]Display\t4]Exit\n";
	do{
		cout<<"Enter choice: ";
			cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter a value: ";
				cin>>val;
			enQueue(val);
			break;
		case 2:
			deQueue();
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
	
}

int main() {   
	Queue q;	 
	q.getdata(); 
	return 0; 
} 

