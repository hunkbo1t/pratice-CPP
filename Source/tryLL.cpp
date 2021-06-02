#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node
{
public:
    int info;
    Node* next;
};
class List:public Node
{
 
    Node *first,*last;
public:
    List()
    {
        first=NULL;
        last=NULL;
    }
    void create(); void insert(); void delet();
    void display(); void search();
    void sort(int list[], int cnt);
    inline int swap(int *a, int *b) { int temp = *a; *a = *b; *b = temp; }
    void getList();
};
void List::create()
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp;
        last=first;
    }
 
    else
    {
        last->next=temp;
        last=temp;
    }
}
void List::insert()
{
    Node *prev,*cur;
    prev=NULL;
    cur=first;
    int count=1,pos,ch,n;
    Node *temp=new Node;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    cout<<"\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE";	//\n3:IN BETWEEN FIRST&LAST NODES
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        temp->next=first;
        first=temp;
        break;
    case 2:
        last->next=temp;
        last=temp;
        break;
//    case 3:
//        cout<<"\nEnter the Position to Insert:";
//        cin>>pos;
//        while(count!=pos)
//        {
//            prev=cur;
//            cur=cur->next;
//            count++;
//        }
//        if(count==pos)
//        {
//            prev->next=temp;
//            temp->next=cur;
//        }
//        else
//            cout<<"\nNot Able to Insert";
//        break;
 
    }
}
void List::delet()
{
    Node *prev=NULL,*cur=first;
    int count=1,pos,ch;
    cout<<"\nDELETE\n1:FIRSTNODE\n2:LASTNODE\n3:Position"; 
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        if(first!=NULL)
        {
            cout<<"\nDeleted Element is "<<first->info;
            first=first->next;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 2:
        while(cur!=last)
        {
            prev=cur;
            cur=cur->next;
        }
        if(cur==last)
        {
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->next=NULL;
            last=prev;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 3:
        cout<<"\nEnter the Position of Deletion:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->next=cur->next;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    }
}
void List::display()
{
    Node *temp=first;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void List::getList(){
	int cnt; int a[];
	Node *temp=first;
    if(temp==NULL){ cout<<"\nList is Empty"; }
    while(temp!=NULL){ cnt++; temp=temp->next; }
    a = new int[cnt];
    for(int i=1; i<cnt; i++){
    	while(temp!=NULL){
    		a[i]=temp->info;
    		temp=temp->next;
		}
	}
}
void List::sort(int list[], int cnt){
	for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i-1; j++){
    if(list[j] > list[j+1]) {      	 
        swap(&list[j], &list[j+1]);
    } } }
    for
}
//void List::swap(Node *a, Node *b) { 
//    int temp = a->info; 
//    a->info = b->info; 
//    b->info = temp; }
void List::search()
{
    int value,pos=0;
    bool flag=false;
    if(first==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==value)
        {
            flag=true;
            cout<<"Element"<<value<<"is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->next;
    }
    if(!flag)
    {
        cout<<"Element "<<value<<" not Found in the List";
    }
}
int main()
{
    List l;
    int ch;
    while(1)
    {
        cout<<"\n**** MENU ****";
        cout<<"\n1:CREATE\n2:INSERT\n3:DELETE\n4:SEARCH\n5:DISPLAY\n6:Sort 7:EXIT\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.create();
            break;
        case 2:
            l.insert();
            break;
        case 3:
            l.delet();
            break;
        case 4:
            l.search();
            break;
        case 5:
            l.display();
            break;
        case 6: l.sort(); break;
		case 7:
            return 0;
        }
    }
    return 0;
}
