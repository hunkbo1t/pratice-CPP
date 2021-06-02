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
		void list_insert();
		//int list_delete();
		void list_travers();
};

void L_list::list_insert(){
	int ch; node *p;
	cout<<"\tEnter element:\t";
		cin>>value;
	cout<<"\nInsert 1]At front 2]At Rear 3]Exit\n";
		cin>>ch;
	do{
	switch(ch){
		case 1:
				p=new node;
				p->data=value;
				p->next=NULL;
					if(head==NULL){
						head=p;
						}else{
							p->next=head;
							head=p;
					}cout<<"\nElement inserted in FRONT.\n";
				break;
		case 2:
				p=new node;
				p->data=value;
				p->next==NULL;
					if(head==NULL){
						head=p;
					}else{
						node *t;
						t=head;
						while(t->next!=NULL){
							t=t->next;
							t->next=p;
						}
					}cout<<"\nElement inserted in END.\n";
					break;
		default: cout<<"\nExiting menu."; break;	
	}}while(ch!=3);
}

void L_list::list_travers(){
	node *t;
		if(head==NULL){
			cout<<"\nList Underflow.";
				return ;
		}else{
			cout<<"\nElement in LList are: \t";
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
		cout<<"\n1]Insert\t2]Travers\n3]Exit\n";
			cin>>ch;
		do{
		switch(ch){
			case 1: l.list_insert();break;
			case 2: l.list_travers(); break;
			case 3: exit(1);
			default: cout<<"\nTry again.";
		}}while(ch!=0);
	return 0;
}
