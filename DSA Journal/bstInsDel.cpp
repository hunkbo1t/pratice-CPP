#include<iostream>
using namespace std;
class node{ public: node *l, *r; int data; };				//utility class
class bst:public node{
	node *root; int cnt = 0;
	public: bst(){ root=NULL; } int inorder(node *ptr);
	void insert(int item); void del(node *root, int item);
	void putTree(node *ptr); void getTree();				//utility memebers
	int isempty(){ return(root==NULL); }
};
void bst::insert(int item){									//insert
	node *p = new node; node *parent;
	p->data=item;
	p->l=NULL; p->r=NULL;
	parent=NULL;
	if(isempty())
		root=p;
	else{
		node *ptr; ptr=root;
		while(ptr!=NULL){
			parent=ptr;
			if(item>ptr->data)
				ptr=ptr->r;
			else
				ptr=ptr->l; 
		} if(item<parent->data)
				parent->l=p;
			else
				parent->r=p; } cnt++; }
void bst::putTree(node *ptr){								//display
	ptr = root;
	//cout<<"\nroot: "; root->data;
	if(ptr!=NULL){
		cout<<"-|"<<ptr->data<<"|";
		putTree(ptr->l); putTree(ptr->r); } }
void bst::getTree(){										//getData
	int ch,data; bst b; 
	cout<<"\n1]Insert 2]delete_ 3]display 4]exit";
	while(1){ cout<<"\nEnter choice: "; cin>>ch;
		switch(ch){
			case 1: cout<<"\nEnter data: "; cin>>data;
					b.insert(data); break;
			case 2:  cout<<"\nEnter data: "; cin>>data;
					b.del(b.root,data); break; 
			case 3:  cout<<"\nB-Tree: ";
					b.putTree(b.root); break;
			case 4: exit(1); break;
				default: cout<<"Wrong choice"; break;
		} } }
void bst::del(node *root,int item){							//Delete
	int *a = new int[cnt];
	for(int i=0;i<=cnt-1;i++){
	if(root!=NULL){
		if(i==item){
			continue;
		}else{
		a[i]=inorder(root); } } }
	for(int i=0;i<cnt-1;i++){
		cout<<a[i]<<"|";
		insert(a[i]); } delete a;}
int bst::inorder(node *ptr){								//inorder
	if(ptr!=NULL){
		inorder(ptr->l); return(ptr->data);
		inorder(ptr->r); return(ptr->data); } }

int main(){													//main function
	bst tree;
	tree.getTree();
	return 0;
}
