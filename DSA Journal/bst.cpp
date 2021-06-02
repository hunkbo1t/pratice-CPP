#include<iostream>
using namespace std;
class node{
	public: node *l, *r; int data;
};
class bst:public node{
	node *root;
	public: bst(){ root=NULL; }
	void insert(int item); void del(); void trav()
	//utility member
	int isempty(){ return(root==NULL); } 
};
void bst::insert(int item){
	node *p, *ptr = new node;
	node *parent;
	p->data=item; p->l=p->r=NULL;
	if(isempty()){ root=p;
	}else ptr=root;
	while(ptr!=NULL){
		parent=ptr;
		if(item>ptr->data)
		ptr=ptr->r;
		else ptr=ptr->l;
	}if (item<parent->data)
	parent->l=p;
	else ptr=ptr->l=p; }
void bst::inord_trav(){ inorder(root); }
void bst::inorder(node *ptr){
	if(ptr!=NULL){
		inorder(ptr->l);
		cout<<"|"<<ptr->data<<"|";
		inorder(ptr->r); } }
void bst::post_ord_trav(){ post_ord(root); }
void bst::post_ord( node *ptr ){
	if(ptr!=NULL){
		post_ord(ptr->l); post_ord(ptr->r);
		cout<<"|"<<ptr->data<<"|"; } }
void bst::pre_ord_trav(){ pre_ord(root); }
void bst::pre_ord( node *ptr ){
	if(ptr!=NULL){
		cout<<"|"<<ptr->data<<"|";
		pre_ord(ptr->l); pre_ord(ptr->r); } }
		
int main(){
	bst b; int ch, data;
	cout<<"Binary tree: 1]Insert 2]Inorder 3]Preorder 4]Postorder 5]Exit\n";
	while(1){
		cout<<"\nEnter Choice: "; cin>>ch;
		switch(ch){
			case 1: cout<<"\nEnter item: "; cin>>data;
			b.insert(data); break;
			case 2: b.inord_trav(); break;
			case 3: b.pre_ord_trav(); break;
			case 4: b.post_ord_trav(); break;
			case 5: break;
			default: cout<<"\nWrong choice."; break;
		} } return 0; }
