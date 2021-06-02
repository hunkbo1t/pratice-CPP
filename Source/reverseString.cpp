#include<iostream>
using namespace std;
void revStr(string& str){
	int n=str.length();
	for(int i=0;i<n/2;i++)
		swap(str[i],str[n-i-1]);
}
int main(){
	string s="null";
	cout<<"\nEnter a string:\t";
		cin>>s;
	revStr(s);
	cout<<s;
	return 0;
}
