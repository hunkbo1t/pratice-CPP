//friend function
#include <iostream>
using namespace std;

class Decon{
	int x;
	public:
		Decon(int p);
		friend void putdata(Decon d);
};

Decon:: Decon(int p){
	x=p;
	cout<<"\nVariable initilized."<<endl;
}

void putdata(Decon d){
	cout<<"You have entered "<<d.x<<endl;
}

int main(){
	Decon d(50);
	putdata(d);
	return 0;

}
