#include<iostream>
using namespace std;
class node{
	public:int data;node *r; node *l;
};

class binarytree{
	node *root;
	public: binarytree(){root=NULL;}
		void insert(int val); void del(int val); void printBST(node*);
		//utility members
		int inline isEmpty(){return (root==NULL);} void display();
		node*  findMinimum(node* cur) { while(cur->l != NULL) { cur = cur->l; }return cur; }  
};

void binarytree::insert(int val){
	node *p=new node;
	node *parent;
	p->data=val;
	p->l=p->r=NULL;
	if(isEmpty()){ root=p;
	}else{
		node *ptr; ptr=root;
		while(ptr!=NULL){
			parent=ptr;
			if(val>ptr->data) 
			ptr=ptr->r;
			else ptr=ptr->l;
		} if(val<parent->data)
			parent->l=p;
		else parent->r=p; } }
void binarytree::del( int item)  {  
    node* parent = NULL;  
    node* cur = root;  
    search(cur, item, parent);  
    if (cur == NULL)  cout<<"\nEmpty!"; return;
    if (cur->l == NULL && cur->r == NULL){  
        if (cur != root) {  
            if (parent->l == cur)  
                parent->l = NULL;  
            else  
                parent->r = NULL;  
        }  else  
            root = NULL;  
  
        free(cur);       
    }  
    else if (cur->l && cur->r)  
    {  
        node* succ  = findMinimum(cur->r);  
  
        int val = succ->data;  
  
        deletion(root, succ->data);  
  
        cur->data = val;  
    }  
  
    else  
    {  
        node* child = (cur->l)? Cur- >l: cur->r;  
  
        if (cur != root)  
        {  
            if (cur == parent->l)  
                parent->l = child;  
            else  
                parent->r = child;  
        }  
  
        else  
            root = child;  
        free(cur);  
    }  
}  
  
node* findMinimum(node* cur)  
{  
    while(cur->l != NULL) {  
        cur = cur->l;  
    }  
    return cur;  
}  
void binarytree::display(){ printBST(root); }
void binarytree::printBST(node *ptr){
	if(ptr!=NULL){
		printBST(ptr->l);
		cout<<ptr->data<<"|";
		printBST(ptr->r); } }
int main(){
	binarytree bt;
	int num,val;
	cout<<"Enter number of elements: "; cin>>num;
	for(int i=0;i<num;i++){
		cout<<"\nElement: "; cin>>val;
		bt.insert(val); }
	cout<<"\nBinary tree created: ";
	bt.display(); return 0; }
