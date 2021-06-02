#include <iostream>
#define MAX 5
using namespace std;
class Queue{
        int front,rear;
        int ele[MAX] ={0};
    public:
        Queue(){
            front =  0;
            rear  = -1;
        }
        int  isFull();
        int  isEmpty();
        void insertQueue(int  item);
        int  deleteQueue();
        void show();
};
//To check queue is full or not
int Queue::isFull(){
    int full = 0 ;
    if( rear == MAX-1 )
        full = 1;
    return full;
}
//To check queue is empty or not
int Queue::isEmpty(){
    int empty = 0 ;
    if( front == rear + 1 )
        empty = 1;
    return empty;
}
//Insert Item into queue
void Queue:: insertQueue(int item){
    if( isFull() ){
        cout<<"\nQueue OverFlow" << endl;
        return;
    }   
    ele[++rear]=item;
    cout<<"\nInserted Value :" << item;
}
//delete item from queue
int Queue:: deleteQueue(){
    if( isEmpty() ){
        cout<<"\nQueue Underflow" << endl;
        return -1;
    }
    ele[front++];
    return 0;
}
//display
void Queue::show(){
	if( isEmpty() ){
        cout<<"\nQueue Underflow" << endl;
    }
	for(int i=0;i<MAX;i++){
		cout<<ele[i]<<" ";
	}	
}

int main(){
    int ch,item=0;
    Queue q = Queue();
    	do{
        cout<<"\n[1]Insert\t[2]Delete\t[3]Display\n";
        cout<<"[4]Quit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"\nInsertion in queue 5 elements : ";
			cin>>item;	
            q.insertQueue(item);
        	cout<<"\nItem inserted: ";
            q.show();
	    break;
		
		case 2:
			cout<<"\nDelete the element from queue : ";
            q.deleteQueue();
            cout<<"\nItems in Queue:\t";
            q.show();
	    break;
	    
		case 3:
            q.show();
	    break;
	    
		case 4:		
		break;
		
		default:
	    cout<<"Wrong choice\n";
	}}while(ch != 4);
    return 0;
}
