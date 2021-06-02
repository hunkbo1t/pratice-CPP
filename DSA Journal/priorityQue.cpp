#include <iostream>
using namespace std;
class node {
	public: int p; int data;
   			node *l;
};
class Priority_Queue {
      node *f;
   public:
      Priority_Queue(){ f = NULL; }
      void insert(int i, int p) {
         node *t, *q; t = new node;
         t->data = i; t->p = p;
         if (f == NULL || p < f->p) {
            t->l= f; f = t;
         } else { q = f;
            while (q->l != NULL && q->l->p <= p)
               q = q->l; t->l = q->l; q->l = t;
         } }
      void del() {
         node *t;
         if(f == NULL) 
            cout<<"\nQueue Underflow\n";
         else { t = f;
            cout<<"\nDeleted item is: "<<t->data<<endl;
            f = f->l; delete(t); } }
      void show(){
         node *ptr;
         ptr = f;
         if (f == NULL)
            cout<<"\nQueue is empty\n";
         else {
            cout<<"\nQueue is : ";
            cout<<"\nPriority Item\n";
            while(ptr != NULL) {
               cout<<ptr->p<<"|"<<ptr->data<<endl;
               ptr = ptr->l;
            } } }
};
int main() {
   int c, i, p;
   Priority_Queue pq;
   do{
      cout<<"\n1.Insert 2.Delete 3.Display 4.Exit\n";
      cout<<"\nEnter your choice : "; cin>>c;
      switch(c) {
         case 1: cout<<"\nInput the item value to be added in the queue : "; cin>>i;
            	 cout<<"Enter its priority : "; cin>>p;
            	 pq.insert(i, p); break;
         case 2: pq.del(); break;
         case 3: pq.show(); break;
         case 4: break;
         default: cout<<"\nWrong choice\n";
      } }while(c != 4); return 0; }
