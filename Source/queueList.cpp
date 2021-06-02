#include<iostream>
using namespace std;
class node{
	public: int data;
	node *next;
};

class queue{
	int val;
	node *front, *rear;
	public:queue(){front=rear=NULL;}
		void insert_();
		void delete_();
		void showdata_();
};

void queue::insert_(){
	node *p;
	cout<<"\nEnter element:\n";
		cin>>val;
	
	p=new node;
	p->data=val;
	p->next=NULL;
	if(front=NULL)
		rear=front=p;
	else{
		rear->next=p;
		rear=p;
	}cout<<"\nElement added\n";
}

void queue::delete_(){
	node *t;
	if(front=NULL)
		cout<<"\nQueue underflow!\n";
	else{
		//data=front->data;
		t=front;
		front=front->next;
	}cout<<t->data<<"\t deleted\n"; delete(t);
}

void queue::showdata_(){
	node *t;
	if(front=NULL)
		cout<<"\nQueue empty!\n";
	else{
		cout<<"\nElements are\t";
		t=front;
		while(t!=NULL){
			cout<<"|"<<t->data<<"|<-["<<t->next<<"]";
		}
	}
}

int main(){
	int ch;
	queue q;
	cout<<"\n1.Insert\t2.Delete\t3.Show List\n4.Exit\n";
		do{
			cout<<"Enter choice:";
				cin>>ch;
		switch(ch){
			case 1: q.insert_(); break;
			case 2: q.delete_(); break;
			case 3: q.showdata_(); break;
			case 4: exit(1);
			default: cout<<"\nTry again\n"; break;
			}
	}while(ch!=4);
	return 0;
}
