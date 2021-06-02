//Member function operates overloading
#include<iostream>
using namespace std;

class Dist{
	public:
		int feet,inch;
		Dist(){
			feet=0;inch=0;
		}
		Dist(int f,int i){
			feet=f;inch=i;
		} 
		Dist operator+(Dist& d2){
			Dist d;
			d.feet=feet+d2.feet;
			d.inch=inch+d2.inch;
			return d;
		}
};

int main(){
	Dist d1(2,2);
	Dist d2(10,2);
	Dist d3;
	d3=d1+d2;
	cout<<"\nTotal Values "<<d3.feet<<"'"<<d3.inch;
	return 0;
}

