jack Stauber - buttercup (GHOST Tap Remix)
#include<iostream>
using namespace std;
class Node{
public:
    int data; Node* next;
};
class LList:public Node{
    Node *head,*rear;
public:
    LList(){ head=NULL; rear=NULL;}
    void insert(); void delet();
    void display(); void create();
    void search(); void sort(); void swap(Node*, Node*);
};
void LList::create(){
    Node *temp; int data;
    cout<<"\nEnter an Element:"; cin>>data;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        rear=head;
    }else{
        rear->next=temp;
        rear=temp;
    } }
void LList::insert(){
    Node *prev,*cur;
    prev=NULL; cur=head;
    int count=1,pos,ch,data;
    Node *temp=new Node;
    cout<<"\nEnter an Element:"; cin>>data;
    temp->data=data; temp->next=NULL;
    cout<<"\ninsert at 1]head 2]rear :"; cin>>ch;
    switch(ch){
    case 1:
        temp->next=head;
        head=temp;
        break;
    case 2:
        rear->next=temp;
        rear=temp;
        break;
    }}
void LList::delet(){
    Node *prev=NULL,*cur=head;
    int count=1,pos,ch;
    cout<<"\nDelete 1]head 2]rear 3]position"; cin>>ch;
    switch(ch){
    case 1:
        if(head!=NULL){
            cout<<"\nDeleted Element is "<<head->data;
            head=head->next;
        }else
            cout<<"\nDeletetion Failed!"; break;
    case 2:
        while(cur!=rear){
            prev=cur; cur=cur->next; }
        if(cur==rear){
            cout<<"\nDeleted Element is: "<<cur->data;
            prev->next=NULL; rear=prev;
			}else
            cout<<"\nDeletetion Failed!"; break;
    case 3: display();
        cout<<"\nEnter the Position of Deletion:"; cin>>pos;
        while(count!=pos){
            prev=cur; cur=cur->next;count++;
        }if(count==pos){
            cout<<"\nDeleted Element is: "<<cur->data;
            prev->next=cur->next;
        }else
            cout<<"\nDelete Failed!"; break;
		} }    
void LList::display(){
    Node *temp=head; int cnt = 1;
    if(head==NULL){ cout<<"\nList is Empty"; }
    while(temp!=NULL) {
        cout<<cnt<<"|"<<temp->data<<"-->";
        temp=temp->next; cnt++;
    }cout<<"NULL";}
    
void LList::search(){
    int value,pos=0;
    bool flag=false;
    if(head==NULL){ cout<<"\nList is Empty"; return; }
    cout<<"\nEnter the Value to be Searched:"; cin>>value;
    Node *temp; temp=head;
    while(temp!=NULL){ pos++;
        if(temp->data==value){ flag=true;
            cout<<"Element "<<value<<" is Found at "<<pos<<" Position.\n"; return;}
        temp=temp->next; }if(!flag){ cout<<"Element "<<value<<" not Found in the LList"; } }

void LList::sort(){ 
    int swapped, i; 
    Node *temp; 
    Node *prev = NULL; 
  if(head==NULL){ cout<<"\nList is Empty"; return; }
    do{ swapped = 0; temp = head; 
        while (temp->next != prev) { 
            if (temp->data > temp->next->data){  
                swap(temp, temp->next); swapped = 1; 
            } temp = temp->next; } prev = temp; 
    } while (swapped); } 
  
void LList::swap(Node *a, Node *b) { 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; }
	 
int main(){
    LList l; int ch;
    do{ cout<<"\n1]Create 2]Insert 3]del 4]search_ 5]sort) 6]DISPLAY 7]Exit\n";
        cout<<"\nEnter Your Choice:"; cin>>ch;
        switch(ch){
        case 1: l.create(); break;
        case 2: l.insert(); break;
        case 3: l.delet(); break;
        case 4: l.search(); break;
        case 5: l.display(); break;
        case 6: break;
        default: "\Worng input."; break;
        }}while(ch!=6); return 0; }
