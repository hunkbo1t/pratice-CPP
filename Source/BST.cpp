#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *l;
	node *r;
};

class BST{
	private:
	void destory_tree(node *leaf);
	void insert(int key,node *leaf);
	node *search(int key, node *leaf);
	void in_order(node *leaf); void post_order(node *leaf); void pre_order(node *leaf);
	
	node * root;
	
	public:
		BST(); ~BST();
		void put_data(int key);
		void destroy(); node *search_data(int key); 
		void post(); void pre();
};

BST::BST(){root=NULL;}
BST::~BST(){destroy();}

//deletion
void BST::destroy(){
	destory_tree(root);
}
void BST::destory_tree(node *leaf){
	if(key!=NULL){
		destory_tree(leaf->l);
		destory_tree(leaf->r);
		delete leaf;
	}
}
//insert
void BST:: put_data(int key){
	if(root!=NULL)
		insert(key,root);
	else{
		root=new node;
		root->data=key;
		root->l=NULL; root->l=NULL;
	}
}

void BST::insert(int key,node *leaf){
	if(key<leaf->data){
		if(leaf->l!=NULL){
			insert(key,leaf->l);
		}else{
			leaf->l=new node;
			leaf->l->data=key;
			leaf->l->l=NULL;
			leaf->l->r=NULL;
		}
	}else if(key>=leaf->data){
		if(leaf->r!=NULL){
			insert(key,leaf->r);
		}else{
			leaf->r=new node;
			leaf->r->data=key;
			leaf->r->l=NULL;
			leaf->r->r=NULL;
		}
	}
}

//search
node *BST::search_data(int key){
	return search(key,root);
}

node *BST::search(int key,node *leaf){
	if(leaf!=NULL){
		if(key==leaf->data){
			return leaf;
		}if(key<leaf->data){
			return search(key,leaf->l);
		}else{
			return search(key,leaf->r);	
		}}else
			return NULL;	
	}


void BST::inorder(){
	inorder(root);
	cout<<endl;
}

void BST::inorder(){
	if(leaf!=NULL){
		in_order(leaf->l);
		cout<<leaf->data<<"\t";
		in_order(leaf->r);
	}
}

void BST::post_order(node *leaf){
	if(leaf!=NULL){
		inorder(leaf->l);
		inorder(leaf->r);
		cout<<leaf->data<<"\t";
	}
}

void BST::post(){
	pre_order(root);
	cout<<endl;
}

void BST::pre(){
	pre_order(root);
	cout<<endl<<"\t";
}

void BST::pre_order(node *leaf){
	if(leaf!=NULL){
		cout<<leaf->data<<"\t";
		inorder(leaf->l);
		inorder(leaf->r);
}}

int main(){
	BST *b=new BST();
	for (int i=10;i<=70;i++){
		t->insert(i);
	}
	b->pre();
	b->inorder();
	b->post();
	
	delete b;
}
