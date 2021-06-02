//Ambiguous
#include<iostream>
using namespace std;
class Base{
	public: void display(){ cout<<"Class A";}
};
class Base2{
	public: void display(){ cout<<"\nClass B";}
};
class Child:public Base, public Base2{
	public: void show(){
		//display();    //creates ambiguous 
		Base::display();
		Base2::display();
	}
};
int main(){
	Child c;
	c.show();
	return 0;
}
