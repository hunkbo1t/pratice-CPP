#include<iostream>
using namespace std;
class node{
	public:
    int data;
    node *next;
    node *prev;
};
class d_list{
	node *start;
    public:
    	d_list(){start = NULL;}
        void list(int value);
        void add_front(int value);
        void add_rear(int value, int pos);
        void delete_element(int value);
        void travers();
};
 
void d_list::list(int value){
    node *s, *t;
    t = new node; 
    t->data = value;
    t->next = NULL;
    if (start == NULL){
        t->prev = NULL;
        start = t;
    }else{
        s = start;
        while (s->next != NULL)
            s = s->next;
        s->next = t;
        t->prev = s;
    }}
 

void d_list::add_front(int value){
    node *t;
	if (start == NULL){
        cout<<"\nList not found!\n";
        return;
    }
    t = new node;
    t->prev = NULL;
    t->data = value;
    t->next = start;
    start->prev = t;
    start = t;
    cout<<"\nElement Inserted\n";
}
 
void d_list::add_rear(int value, int pos){
    node *t, *q;
	if (start == NULL){
        cout<<"\nlist not found!\n";
        return;
    }
    q = start;
    for (int i = 0;i < pos - 1;i++){
        q = q->next;
        if (q == NULL){
            cout<<"There are less than ";
            cout<<pos<<" elements."<<endl;
            return;
        }
    }
    t= new node;
    t->data = value;
    if (q->next == NULL){
        q->next = t;
        t->next = NULL;
        t->prev = q;      
    }else{
        t->next = q->next;
        t->next->prev = t;
        q->next = t;
        t->prev = q;
    }
    cout<<"\nElement Inserted.\n";
}
 
void d_list::delete_element(int value){
    node *t, *q;
    if (start == NULL){                      
                cout<<"List underflow\n";   
                return;
            }
    if (start->data == value){			//in front
        t= start;
        start = start->next;  
        start->prev = NULL;
        cout<<"\nElement Deleted\n";
        delete(t);
        return;
    }
    q = start;
    while (q->next->next != NULL){   		//in between
        if (q->next->data == value) {
            t = q->next;
            q->next = t->next;
            t->next->prev = q;
            cout<<"\nElement Deleted\n";
            delete(t);
            return;
        }
        q = q->next;
    }
    if (q->next->data == value){		//from last 	
        t = q->next;
        delete(t);
        q->next = NULL;
        cout<<"\nElement Deleted\n";
        return;
    }
    cout<<"\nElement "<<value<<" not found.\n";
}

void d_list::travers(){
    node *q;
    if (start == NULL){
        cout<<"\nList underflow.\n";
        return;
    }
    q = start;
    cout<<"The Doubly Link List is :\t";
    while (q != NULL){
        cout<<q->data<<"<->";
        q = q->next;
    }
    cout<<"NULL\n";
}

int main(){
    int ch, data, pos;
    d_list dl;
    while (1){
        cout<<"1.Create node\t2.Add at begining\t3.Add after position\t4.Delete\t5.Display\n6.Quit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch ( ch ){
        case 1:
            cout<<"Enter the element: ";
            cin>>data;
            dl.list(data);
            break;
        case 2:
            cout<<"Enter the element: ";
            cin>>data;
            dl.add_front(data);
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>data;
            cout<<"Insert Element after postion: ";
            cin>>pos;
            dl.add_rear(data, pos);
            break;
        case 4:
            cout<<"Enter the element for deletion: ";
            cin>>data;
            dl.delete_element(data);
            break;
        case 5:
            dl.travers();
            break;
        case 6:
            exit(1);
        default:
            cout<<"\nTry Again\n";
        }
    }
    return 0;
}
 
