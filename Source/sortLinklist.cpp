#include<iostream>
using namespace std;
class node {
	public:
   int d;
   node *n;
};


class list{
	int c = 0;
	node *p = NULL, *head = NULL, *q = NULL, *np = NULL;
	public:
		void createnode(int n);
		void display(int i);
};
void list::createnode(int n) {
   np = new node;
   np->d = n;
   np->n = NULL;
   if (c == 0) {
      head = np;
      p = head;
      p->n = head;
      c++;
   } else if (c == 1) {
      p = head;
      q = p;
      if (np->d < p->d) {
         np->n = p;
         head = np;
         p->n = np;
      } else if (np->d > p->d) {
         p->n = np;
         np->n = head;
      }
      c++;
   } else {
      p = head;
      q = p;
      if (np->d < p->d) {
         np->n = p;
         head = np;
         do {
            p = p->n;
         }
         while (p->n != q);
            p->n = head;
      } else if (np->d > p->d) {
         while (p->n != head && q->d < np->d) {
            q = p;
            p = p->n;
            if (p->n == head) {
               p->n = np;
               np->n = head;
            } else if (np->d< p->d) {
               q->n = np;
               np->n = p;
               break;
            }}
      }}
}
void list:: display(int i) {
   node *t = head;
   int c = 0;
   while (c <= i ) {
      cout<<t->d<<"\t";
      t = t->n;
      c++;
   }
}
int main() {
   int i = 0, n, a;
   list l;
   cout<<"\nEnter the no of nodes\t";
   cin>>n;
   while (i < n) {
      cout<<"\nEnter value of node\t";
      cin>>a;
      l.createnode(a);
      i++;
   }
   cout<<"\nSorted singly link list:\t";
   l.display(n);
}
