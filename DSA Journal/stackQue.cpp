#include<iostream>
#define size 8
using namespace std;
class Stack{
	int stack[size],top=-1;
	public:
		void push(int val); void pop();
		//utility members
		void putdata(); void getStack();
};
void Stack::push(int val){ 
	if(top>=size-1)
		cout<<"Stack Overflow!\n";
	else
		top++; stack[top]=val; }
void Stack::pop(){
	if(top<=-1)
		cout<<"Stack Underflow!\n";
	else
		cout<<stack[top]<<" is been popped.\n"; top--; }
void Stack::putdata(){
	if(top>=0){
		cout<<"Elements are: ";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		} }else{ cout<<"Stack empty!\n"; } } 
void Stack::getStack(){
		int ch,val;
	cout<<"\n1]Push	2]Pop 3]Display	4]Exit\n";
	do{ cout<<"\nEnter choice: "; cin>>ch;
	switch(ch){
		case 1: cout<<"\nEnter a value: ";
				cin>>val; push(val); break;
		case 2: pop(); break;
		case 3: putdata(); break;
		case 4: cout<<"\nExit the menu.\n"; break;
		default: cout<<"\nInvalid choice!\n";
	} }while(ch!=4); }
//Queue
class Queue{
        int front,rear; int ele[size] ={0};
    public:
        Queue(){ front =  0; rear  = -1; cout<<"\nInitilization stack to 0\nStack size: 8\n"; }
        void insertQueue(int  item); int  deleteQueue();
        //utility members
        void getQue(); void putQue();
        int  isFull(); int  isEmpty();
};
//To check queue is full or not
int Queue::isFull(){
    	int full = 0 ;
    if( rear == size-1 )
        full = 1; return full; }
//To check queue is empty or not
int Queue::isEmpty(){
    	int empty = 0 ;
    if( front == rear + 1 ) empty = 1; return empty; }
//Insert Item into queue
void Queue:: insertQueue(int item){
    if( isFull() ){
        cout<<"\nQueue OverFlow" << endl; return; }   
    ele[++rear]=item;
    cout<<"\nInserted Value: " << item; }
//delete item from queue
int Queue:: deleteQueue(){
    if( isEmpty() ){
        cout<<"\nQueue Underflow" << endl; return -1; }
    ele[front++]; return 0; }
//display
void Queue::putQue(){
	if( isEmpty() ){ cout<<"\nQueue Underflow" << endl; }
	for(int i=0;i<size;i++){ cout<<ele[i]<<" "; } }
//GetQueue
void Queue::getQue(){
		int ch,item=0; Queue q;
    cout<<"\n[1]Insert	[2]Delete	[3]Display\n[4]Quit\n";
		do{ cout<<"Enter your choice : "; cin>>ch;
        switch(ch){
        case 1:
            cout<<"\nInsert elements in queue: "; cin>>item;	
            q.insertQueue(item);
        	cout<<"\nItem inserted\n"; break;
		case 2:
			cout<<"\nDelete the element from queue\n";
            q.deleteQueue();
            cout<<"\nItems in Queue:\t"; break;
		case 3: q.putQue(); break;
		case 4:	exit(1); break;
		default:	cout<<"\nWrong choice\n";
		} } while(ch != 4); }
class Struct:public Stack, public Queue{};
int main(){
	Struct s; int ch;
		do{ cout<<"\nEnter choice: 1]Stack 2]Queue 3]Quit : "; cin>>ch;
				switch(ch){
					case 1: s.getStack(); break;
					case 2: s.getQue(); break;
					case 3: cout<<"Exit loop.";
						exit(1); break;
					default: cout<<"\nWrong choice\n"; } }while(ch!=3);
				return 0; }
