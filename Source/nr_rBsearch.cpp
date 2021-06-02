#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

class bsearch
{
	private: int A[20],low,high,n;
	public:
	void getdata();
	int I_BinarySearch(int num);
	int Re_BinarySearch(int num)
	{
		return(R_BinarySearch(num,0,n-1));
	}
	int R_BinarySearch(int value,int low,int high);
};
void bsearch::getdata()
{
	int i;
	cout<<"Enter the no. of elements of array\n";
	cin>>n;
	cout<<"Enter elements in ascending order\n";
	for(i=0;i < n;i++)
	{
		cout<<"Enter elements A["<<i<<"]\t";
		cin>>A[i];
	}
}

int bsearch :: I_BinarySearch(int value)
{
	int mid;
	low=0;
	high=n-1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (A[mid] > value)
			high = mid -1;
		else if (A[mid] < value)
			low = mid + 1;
		else
			return mid; //found
	}
	return -1; //not found
}
int bsearch::R_BinarySearch(int value,int low,int high)
{
    int mid;
	if(high < low)
		return -1; // not found
	else
	{
		mid = (low + high) / 2;
		if (A[mid] > value)
			return R_BinarySearch(value,low,mid-1);
		else if (A[mid] < value)
			return R_BinarySearch(value, mid+1, high);
		else
			return mid;	// found
	  }
}
int main()
{
	bsearch b;
	char ans;
	int num,ch,p;
	b.getdata();
	do
	{
		cout<<"Enter the element to be searched\n";
		cin>>num;
		cout<<"********MENU**********\n";
		cout<<"1. Iterative Binary search\n";
		cout<<"2. Recursive Binary Search\n";
		cout<<"Enter your choice\n";
		cin>>(ch);
		switch(ch)
		{
			case 1:	p=b.I_BinarySearch(num);
					break;
			case 2:	p =b.Re_BinarySearch(num);
					break;
		}
		if(p==-1)
			cout<<num<<" data is not present in array\n";
		else
			cout<<num<<" data is present at "<<p+1<<" position in array\n";
		cout<<"do you want to continue\n";
		cin>>ans;
	}while(ans=='y' || ans=='Y');
	return 0;
}
