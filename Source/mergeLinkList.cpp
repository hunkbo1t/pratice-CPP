#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class List{
	public:
		Node *nnode(int val){
	Node *temp=new Node;
	temp->data=val;
	temp->next=NULL;
	return temp;
}
		Node *merge(Node *l1, Node *l2){
	if(!l1 ) 
		return l2;
	if(!l2)
		return l1; 
		
	if (l1->data<l2->data){
		l1->next=merge(l1->next,l2);
		return l1;
	}else{
		l2->next=merge(l1,l2->next);
		return l2;
	}
}
		void show_list(Node *node){
	while (node!=NULL){
		cout<<"|"<<node->data<<"|->";
		node=node->next;
	}cout<<"NULL";}
};

int main(){
	List l;
	Node *l1=l.nnode(1);
	l1->next=l.nnode(2);
	l1->next->next=l.nnode(3);
	Node *l2=l.nnode(4);
	l2->next=l.nnode(5);
	l2->next->next=l.nnode(6);
	
	Node *merg_lis.t=l.merge(l1,l2);
	l.show_list(merg_list);
	return 0;
}
