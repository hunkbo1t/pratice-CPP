//multi level inher
#include<iostream>
using namespace std;
class Animal{
	public: void eats(){cout<<"Eats"<<endl;}
};
class Dog:public Animal{
	public: void barks(){cout<<"Barks"<<endl;}
};
class Puppy: public Dog{
	public: void weeps(){cout<<"Weeps";}
};
int main(){
	Puppy p;
	p.eats();
	p.barks();
	p.weeps();
	return 0;
}
