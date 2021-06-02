//Menu
#include<iostream>
#include<conio.h>
using namespace std;
const int m=50;
class Menu{
	int itemCode[m];
	float itemCost[m];
	int cnt;
	public:
		void setcnt(){cnt=0;}
		void getItems();
		void displaySum();
		void remove();
		void showItems();
};

void Menu::getItems(){
	cout<<"Enter ItemCode: ";
	cin>>itemCode[cnt];
	cout<<"\nEnter ItemCost: ";
	cin>>itemCost[cnt];
	cnt++;
}

void Menu::displaySum(){
	float sum=0;
	for(int i=0;i<cnt;i++){sum+=itemCost[i];}
		cout<<"\nTotal Value: "<<sum;
}

void Menu::remove(){
	int x;
	cout<<"\nEnter the itemCode:";
	cin>>x;
	for(int i=0;i<cnt;i++){
		if(itemCode[i]==x){itemCost[i]=0;}
	}
}

void Menu::showItems(){
	cout<<"\nCode\tPrice"<<endl;
	for(int i=0;i<cnt;i++){
		cout<<itemCode[i]<<"|\t"<<itemCost[i]<<endl;
	}
}

int main(){
	Menu s;
	s.setcnt();
	int x;
	do{

		cout<<"\nEnter a Correct choice:\n 1]Add Item\n 2]Display Total\n 3]Delete Item\n 4]Display all items\n 5]Exit\n";
		cin>>x;
		
		switch(x){
			case 1: s.getItems();break;
			case 2: s.displaySum();break;
			case 3: s.remove();break;
			case 4: s.showItems();break;
			case 5: break;
			default: cout<<"Error in input value";
		}
	}while(x!=5);
	return 0;
}
