#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *l,*r;
		node();
		node(int data){
			this.data=data;
			l=NULL; r=NULL;
		}
};

class Btree{
	public:
		node *root; int cnt=0;
		int isempty(){ return(root==NULL); }
		void insert(int data){
			node *p = new node(data); node *parent;
			parent=NULL;
		if(isempty())
			root=p;
		else{
		node *ptr; ptr=root;
		while(ptr!=NULL){
			parent=ptr;
			if(data>ptr->data)
				ptr=ptr->r;
			else
				ptr=ptr->l; 
		} if(data<parent->data)
				parent->l=p;
			else
				parent->r=p; } cnt++; }
};

int main(){
	Btree b;
	int cou
	b.insert()
}
