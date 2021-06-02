//Array of objects
#include<iostream>
using namespace std;

class Arr{
	int num;
	public:
		int getnum(){
			return num;
		}
		void setnum(int i){
			num=i;
		}
};

int main(){
	int n;
	cout<<"Enter num of obj:";
	cin>>n;
	Arr a[n];
	for(int i=0;i<n;i++){
		a[i].setnum(i);
	}
	for(int i=0;i<n;i++){
		cout<< "Object a["<<i<<"].getnum()::"<<a[i].getnum()<<endl;
	}
	return 0;
}
