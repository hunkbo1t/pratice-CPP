//hierarchical inher
#include<iostream>
using namespace std;
class Shape{
	public: int a,b;
	void data(int n, int m){a=n; b=m;} 
};
class Rect:public Shape{
	public: int rect_area(){int area =a*b; return area;}
};
class Tri:public Shape{
	public:int tri_area(){int area =0.5*a*b; return area;}
};
int main(){
	Rect r;
	Tri t;
	int l,b,h,base;
	
	cout<<"Enter values length and breath: ";
	cin>>l>>b;
	r.data(l,b);
	int reg=r.rect_area();
	cout<<"\nArea of rect is "<<reg<<endl;
	
	cout<<"Enter values base and h: ";
	cin>>base>>h;
	t.data(base,h);
	int tri=t.tri_area();
	cout<<"\nArea of triangle is "<<tri<<endl;
	return 0;
}
