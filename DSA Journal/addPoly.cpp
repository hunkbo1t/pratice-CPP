#include <iostream> 
using namespace std; 
// A utility function to return maximum of two integers 
int inline max(int m, int n) { return (m > n)? m: n; } 
 
int *add(int poly1[], int poly2[], int m, int n) { 
int size = max(m, n); 
int *sum = new int[size]; 
for (int i = 0; i<m; i++) 
	sum[i] = poly1[i]; 
for (int i=0; i<n; i++) 
	sum[i] += poly2[i]; 
	return sum; 
} 
void printPoly(int poly[], int n) { 
	for (int i=0; i<n; i++) { 
	cout << poly[i]; 
	if (i != 0) 
		cout << "x^" << i ; 
	if (i != n-1) 
	cout << " + "; 
	} 
} 
int main() { 
	int s;
	cout<<"Enter size of expression: "; cin>>s;
	int e1[s];
	cout<<"\nFirst polynomial: ";
	for (int i=0;i<s;i++){
		cin>>e1[i];
	}
	int e2[s];
	cout<<"\nSecond polynomial: ";
	for (int i=0;i<s;i++){
		cin>>e2[i];
	}
	int m = sizeof(e1)/sizeof(e1[0]); 
	int n = sizeof(e2)/sizeof(e2[0]); 
	cout << "First polynomial is "; 
	printPoly(e1, m); 
	cout << "\nSecond polynomial is "; 
	printPoly(e2, n); 
	int *sum = add(e1, e2, m, n); 
	int size = max(m, n); 
	cout << "\nSum polynomial is "; 
	printPoly(sum, size); 
	return 0; 
} 
	 


