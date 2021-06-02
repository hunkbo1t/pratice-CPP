//Binary Operator overloading using friend function
#include<iostream>
#include<string>
using namespace std;

class Com{
	int real,img;
	public:
		Com(int r,int i){
			real=r;img=i;
		}
		void displaydata(){
			cout<<"\nNumber is "<<real<<"+"<<img<<"i"<<endl;
		}
		friend Com operator+(Com ,Com );
};

Com operator+(Com c1,Com c2){
			return Com(c1.real+c2.real,c1.img+c2.img);
		}
		
int main(){
	Com c1(5,4);
	Com c2(3,4);
	c1.displaydata();c2.displaydata();
	Com c3=c1+c2;
	c3.displaydata();
	return 0;
}

