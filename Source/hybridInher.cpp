//hybrid
#include<iostream>
using namespace std;
class Base{
	protected: int a;
	public: void data_a(){
		cout<<"Enter value of a: "; cin>>a;
	}
};
class Child:public Base{
	protected: int b;
	public: void data_b(){
		cout<<"Enter value of b: "; cin>>b;
	}
};
class Derived{
	protected: int c;
	public: void data_c(){
		cout<<"Enter value of c: "; cin>>c;
	}
};
class Legacy: public Child, public Derived{
	protected: int d;
	public: void mult(){
		data_a(); data_b(); data_c();
		cout<<"\na*b*c="<<a*b*c;
		}
};
int main(){
	Legacy l;
	l.mult();
	return 0;
}
