//derived constructors
#include<iostream>
using namespace std;
class Base{
	int base;
	public:
		Base(int i){
			base=i;
			cout<<"\n Base class constructor is called. Value:"<<base<<endl;
		}
};
class Child{
	int child;
	public:
		Child(int j){
			child=j;
			cout<<"\n Child class constructor is called. Value:"<<child<<endl;
		}
};
class Legacy:public Base, /*virtual*/ public Child{
	int leg;
	public:
		Legacy(int i, int j, int k):Base(i),Child(j){
			leg=k;
			cout<<"\n Legacy class constructor is called. Value:"<<leg<<endl;
		}
};
int main(){
	Legacy l(10,20,30);
	return 0;
}
