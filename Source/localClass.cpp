//local class
#include <iostream>
using namespace std;

void testFun(void){
	class Testin{
		int num;
		public:
			void set(int n){num =n;	}
			void putdata(){cout<<num;}
	};
	cout<<"inside local class.\n";
	Testin t1;
	t1.set(100);
	cout<<"Value inside is "; 
	t1.putdata();
	
}

int main(){
	
	class Testout{
		int num;
		public:
			void set(int n){num =n;	}
			void putdata(){cout<<num;}
	};
	cout<<"Calling local class\n";
	testFun();
	cout<<"\nOutside in Main function.\n";
	Testout t2;
	t2.set(200);
	cout<<"Value outside is ";
	t2.putdata();
	
	
	return 0;
}
