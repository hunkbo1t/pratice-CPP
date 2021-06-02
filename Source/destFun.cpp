//destructor
#include<iostream>
using namespace std;

class Dest{
	int temp;
	public:
		Dest(int x);
		void putdata();
		~Dest();
};

Dest::Dest(int x){
	temp = x;
	cout<<"Object is created and initilized.\n";
}

Dest::~Dest(){
	cout<<"\n Destructor is called. Memory is reliased.";
}
	
void Dest::putdata(){
	cout<<"\n Data is "<<temp;
}

int main(){
	Dest d(45);
	d.putdata();
	return 0;
}
