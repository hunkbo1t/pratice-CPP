#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
};

class L_list{
	node *head; int value;
	public:
		L_list(){head=NULL;}
		void insert_front();
		void insert_rear();
		void list_travers();
};

void L_list::insert_front(){
	node *p;
	cout<<"\tEnter element:\t";
		cin>>value;
		p=new node;
		p->data=value;
		p->next=NULL;
		if(head==NULL){
			head=p;
		}else{
			p->next=head;
			head=p;
		}cout<<"\nElement inserted in FRONT.\n";
}

void L_list::insert_rear(){
	node *p;
	cout<<"\tEnter element:\t";
		cin>>value;
		p=new node;
		p->data=value;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else{
			node *t;
			t=head;
			while(t->next!=NULL)
			t=t->next;
			t->next=p;
		}cout<<"\nElement inserted in END.\n";
}

void L_list::list_travers(){
	node *t;
		if(head==NULL){
			cout<<"\nList Underflow.";
				return ;
		}else{
			cout<<"\nElement in list are: \t";
				t=head;
				while(t!=NULL){
					cout<<"|"<<t->data<<"|->";
					t=t->next;
				}
			}
		}
		
int main(){
	int ch;
	L_list l;
	while(1){
		cout<<"\n1]Insert At FRONT\t2]Insert At REAR\t3]Travers\n4]Exit\n";
			cin>>ch;
		switch(ch){
			case 1: l.insert_front(); break;
			case 2: l.insert_rear(); break;
			case 3: l.list_travers(); break;
			case 4:exit(0);
			default: cout<<"\nTry again.";
		}}
	return 0;
}
