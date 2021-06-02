//multipal inheritance
#include <iostream>
using namespace std;
class Base{
	protected: int a;
	public: void get_base(int n){a=n;}
};
class Base2{
	protected: int b;
	public: void get_base2(int n){b=n;}
};
class Child:public Base, public Base2{
	public: void display(){
		cout<<"Value of a "<<a<<"\nValue of b "<<b<<"\nAddition: "<<a+b;
	}
};
int main(){
	Child c;
	c.get_base(10);
	c.get_base2(20);
	c.display();
	return 0;
}
