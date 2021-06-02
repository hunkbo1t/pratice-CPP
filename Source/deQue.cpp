#include<iostream> 
using namespace std; 
#define MAX 4 
 
class Deque { 
	int arr[MAX]; 
	int front; 
	int rear; 
	int size; 
public : 
	Deque(int size) { 
		front = -1; 
		rear = 0; 
		this->size = size; 
		arr[MAX]=0;
	} 

	// Operations on Deque: 
	void insertfront(int key); 
	void insertrear(int key); 
	void deletefront(); 
	void deleterear();
	void showQue(); 
	bool isFull(); 
	bool isEmpty(); 
	int getFront(); 
	int getRear(); 
}; 
//Display que
void Deque::showQue() {
	// check whether Deque is empty or not 
	if (isEmpty()) { 
		cout << "\nQueue Underflow\n" << endl; 
		return ; 
	} 
	for(int i=0;i<MAX-1;i++)
		cout<<arr[i]<<" ";
}

// Checks whether Deque is full or not. 
bool Deque::isFull() { 
	return ((front == 0 && rear == size-1)|| 
			front == rear+1); 
} 
// Checks whether Deque is empty or not. 
bool Deque::isEmpty () { 
	return (front == -1); 
} 
// Inserts an element at front 
void Deque::insertfront(int key) { 
	// check whether Deque if full or not 
	if (isFull()) { 
		cout << "\nOverflow\n" << endl; 
		return; 
	} 
	// If queue is initially empty 
	if (front == -1) { 
		front = 0; 
		rear = 0; 
	}else if (front == 0) 
		front = size - 1 ; 
	else				 // decrement front end by '1' 
		front = front-1; 
	// insert current element into Deque 
	arr[front] = key ; 
} 

// function to inset element at rear end 
// of Deque. 
void Deque ::insertrear(int key) { 
	if (isFull()) { 
		cout << "\nOverflow\n " << endl; 
		return; 
	} 
	// If queue is initially empty 
	if (front == -1) { 
		front = 0; 
		rear = 0; 
	} 
	// rear is at last position of queue 
	else if (rear == size-1) 
		rear = 0; 
	// increment rear end by '1' 
	else
		rear = rear+1; 
	// insert current element into Deque 
	arr[rear] = key ; 
} 

// Deletes element at front end of Deque 
void Deque ::deletefront() { 
	// check whether Deque is empty or not 
	if (isEmpty()) { 
		cout << "\nQueue Underflow\n" << endl; 
		return ; 
	} 

	// Deque has only one element 
	if (front == rear) { 
		front = -1; 
		rear = -1; 
	} 
	else
		// back to initial position 
		if (front == size -1) 
			front = 0; 
		else // increment front by '1' to remove current 
			// front value from Deque 
			front = front+1; 
} 
// Delete element at rear end of Deque 
void Deque::deleterear() { 
	if (isEmpty()) { 
		cout << "\nUnderflow\n" << endl ; 
		return ; 
	} 
	// Deque has only one element 
	if (front == rear) { 
		front = -1; 
		rear = -1; 
	} else if (rear == 0) 
		rear = size-1; 
	else
		rear = rear-1; 
} 
// Returns front element of Deque 
int Deque::getFront() { 
	// check whether Deque is empty or not 
	if (isEmpty()) { 
		cout << "\nUnderflow\n" << endl; 
		return -1 ; 
	} 
	return arr[front]; 
} 
// function return rear element of Deque 
int Deque::getRear() { 
	// check whether Deque is empty or not 
	if(isEmpty() || rear < 0) { 
		cout << "\nUnderflow\n" << endl; 
		return -1 ; 
	} return arr[rear]; 
} 
// Driver program to test above function 
int main() {
	int size,item,ch; 
	cout<<"\nEnter size of Queue(<10): ";
	cin>>size; 
	Deque d(size);
	do{
        cout<<"\n[1]Insert from FRONT\t[2]Insert from REAR\n[3]Delete from FRONT\t[4]Delete from REAR\t[5].Display\n";
        cout<<"[6]Quit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"\nInput the element for FRONT insertion in queue : ";
            cin>>item;	
            d.insertfront(item);
            cout<<"\nItem inserted: "<<d.getFront();
	    break;
		
		case 2:
			cout<<"\nInput the element for REAR insertion in queue : ";
            cin>>item;	
            d.insertrear(item);
            cout<<"\nItem inserted: "<<d.getRear();    
	    break;
	    
        case 3:
            cout<<"\nDelete the element for FRONT in queue : ";
            d.deletefront();
            cout<<"\nItems in Queue:\t";
			d.showQue();
	    break;
		
		case 4:
			cout<<"\nDelete the element for REAR in queue : ";
            d.deleterear();
            cout<<"\nItems in Queue:\t";
			d.showQue();
	    break;
	    
		case 5:
            cout<<"\nItems in Queue:\t";
			d.showQue();
	    break;
	    
		case 6:
		break;
		
		default:
	    cout<<"Wrong choice\n";
	}}while(ch != 6);
	return 0; 
} 

