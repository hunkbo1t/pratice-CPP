//Parametrized Construct
#include<iostream>
using namespace std;

class Const{
	int temp;
	public:
		void putdata();
		Const();
		Const(int x);
};

Const::Const() {
	cout<<"\nDefault Constructor is called.";
}

Const::Const(int x){
	temp=x;
	cout<<"\nParametrized Constructor is called. Value of temp is assigned";
}

void Const::putdata(){
	cout<<"\nValue of Temp is "<<temp<<endl;
}

int main(){
	Const c;
	Const c2(10);
	cout<<"\nValue in default Constructor ";
	c.putdata();
	cout<<"\nIn parametric constructor ";
	c2.putdata();
	return 0;
}
