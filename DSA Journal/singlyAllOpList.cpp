#include<iostream>
#include<algorithm>
using namespace std;
//utility class
class Node{
public: int info; Node* next;
};

class List:public Node{
    Node *head,*rear;
public:
    List(){ head=NULL; rear=NULL; }
    void insert(); void delet();
    void search(); void sort();
    //utility members
    int length(); void create(); void display();
};
void List::create(){
    Node *temp; int n;
    temp=new Node;
    cout<<"\nEnter an Element:"; cin>>n;
    temp->info=n; temp->next=NULL;
    if(head==NULL) {
        head=temp; rear=head;
    }else{
        rear->next=temp; rear=temp; } }
void List::insert(){
    Node *prev,*cur;
    prev=NULL;cur=head;
    int count=1,pos,ch,n;
    Node *temp=new Node;
    cout<<"\nEnter an Element:"; cin>>n;
    temp->info=n; temp->next=NULL;
    cout<<"\nInsert at 1:front 2:rear ";
    cout<<"\nEnter Your Choice:"; cin>>ch;
    switch(ch){
    case 1: temp->next=head; head=temp; break;
    case 2: rear->next=temp; rear=temp; break;
    default: cout<<"\nWrong input."; break; } }
void List::delet(){
    Node *prev=NULL,*cur=head;
    int count=1,pos,ch;
    cout<<"\nDelete at 1:head 2:rear 3:position ";
    cout<<"\nEnter Your Choice:"; cin>>ch;
    switch(ch){
    case 1: if(head!=NULL){
            cout<<"\nDeleted Element is "<<head->info;
            head=head->next;
        }else cout<<"\nItem not found"; break;
    case 2:while(cur!=rear){
            prev=cur; cur=cur->next;
		} if(cur==rear){
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->next=NULL; rear=prev;
        }else cout<<"\nItem not found"; break;
    case 3: cout<<"\nEnter the Position of Deletion:"; cin>>pos;
        while(count!=pos){
            prev=cur; cur=cur->next; count++;
        } if(count==pos){
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->next=cur->next;
        }else cout<<"\nItem not found"; break; } }
void List::display(){
    Node *temp=head;
    if(temp==NULL) {
        cout<<"\nList is Empty";
    } while(temp!=NULL){
        cout<<"|"<<temp->info<<"|-->";
        temp=temp->next;
    }cout<<"NULL"; }
void List::sort(){
	int cnt= length(); int arr[cnt];
	Node *temp=head; int index = 0; 
    Node* curr = head; 
  	while (curr != NULL) { 
        arr[index++] = curr->info; curr = curr->next; 
    } cout<<"\nUn sorted: ";
	 for(int i=0;i<cnt;i++){
	 	cout<<"|"<<arr[i]<<"|->";
	 }cout<<"Null";
	 int n = sizeof(arr)/sizeof(arr[0]);
	 std::sort(arr,arr+n); cout<<"\nSorted: ";
	 for(int i=0;i<cnt;i++){
	 	cout<<"|"<<arr[i]<<"|->";
	 }cout<<"Null"; }
int List::length() { 
    Node* curr = head;  int cnt = 0; 
    while (curr != NULL) { 
        cnt++; curr = curr->next; } 
    return cnt; }
void List::search() {
    int value,pos=0;
    bool flag=false;
    if(head==NULL){
        cout<<"\nList is Empty"; return;
    } cout<<"\nEnter the Value to be Searched: "; cin>>value;
    Node *temp; temp=head;
    while(temp!=NULL){ pos++;
        if(temp->info==value){
            flag=true; cout<<"\nElement"<<value<<" is Found at "<<pos<<" Position."; return;
        }temp=temp->next; }
    if(!flag) { cout<<"\nElement "<<value<<" not Found in the List"; } }

int main(){
    List l; int ch;
    while(1){
        cout<<"\n1:CREATE 2:INSERT 3:DELETE 4:SEARCH 5:DISPLAY 6:SORT 7:EXIT\n";
        cout<<"\nEnter Your Choice:"; cin>>ch;
        switch(ch){
        case 1: l.create(); break;
        case 2: l.insert(); break;
        case 3: l.delet(); break;
        case 4: l.search(); break;
        case 5: l.display(); break;
        case 6: l.sort(); break;
        case 7: exit(1); break;
        default: cout<<"\nWrong option."; break;
        } } return 0; }
