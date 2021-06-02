//memory access operator
#include<iostream>
using namespace std;

class Box{
	int height, breadth, length;
	public:
		Box(double l=2.0, double b=2.0, double h=2.0){
			cout<<"Object is initialized.\n";
			length=l;height=h;breadth=b;
		}
		double vol(){
			return (length*height*breadth);
		}
};

int main(){
	Box b1(10.5,2.5,8.5),b2(20.5,18.5,2.5);
	Box *ptrBox;
	
	ptrBox = &b1;
	cout<<"Volume of box 1: "<<ptrBox->vol()<<endl;
	
	ptrBox = &b2;
	cout<<"Volume of box 2: "<<ptrBox->vol()<<endl;
	
	return 0;
}
