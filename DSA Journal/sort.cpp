#include<iostream>
using namespace std;
//Sorting using Bubble,Selection,Quick,Insertion,Merge
class Sort{
	public:
		int bubble(int list[], int n);
		int select(int list[], int n);
		int insert(int list[], int n);
		int quick(int list[], int low, int high);
		int merge(int list[], int low, int high);
		//utility members
		inline int swap(int *a, int *b) { int temp = *a; *a = *b; *b = temp; }
		int get_quick(int list[], int n);
		int get_merge(int list[], int n);
		int part(int list[], int low, int high);
		int merge(int list[], int p, int q, int r);
		void showData(int list[], int n);
};

	int main(){
		int n,ch; int list[25];
		Sort s;
		cout<<"\nEnter number of elements: ";	cin>>n;		//get n
		cout<<"\nEnter "<<n<<" elements: ";
			for(int i = 0; i < n; i++){ cin>>list[i]; }		//get elements
		cout<<"\nElements Before sort:";
			for(int i = 0; i < n; i++){	cout<<list[i]<<" "; }//before sort
		//Sort menu
		cout<<"\n1]Bubble_sort	2]Selection_sort\n3]Quick_sort	4]Merge_sort\n5]Insertion_sort	6]Exit\n";
    	do{
        cout<<"\nEnter choice: ";   cin>>ch;
        switch (ch){
        case 1: s.bubble(list, n); s.showData(list, n);   break;
        case 2: s.select(list, n); s.showData(list, n);   break;
        case 3: s.get_quick(list, n); s.showData(list, n);   break;
        case 4: s.get_merge(list, n); s.showData(list, n);   break;
        case 5: s.insert(list, n); s.showData(list, n);   break;
        case 6: exit(1);    break;
        default:    cout<<"\nTry again\n";  break;
        }}while(ch != 6);   return 0;
	
	}
//Bubble Sort
int Sort :: bubble(int list[], int n){
	for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i-1; j++){
    if(list[j] > list[j+1]) {      	 
        swap(&list[j], &list[j+1]);
    } } } }
//Seclection Sort
int Sort :: select(int list[], int n){
	int i,j,temp,min;
	for(int i=0;i<n-1;i++){ 
		min=i;
	for(j=i+1;j<n;j++){
	if(list[j]<list[min]){
		min=j;
	} swap(&list[i],&list[min]); 
	} } }
//Quick Sort
int Sort :: get_quick(int list[], int n){
	int low = list[0]; int high = list[n-1];
	return quick(list, low, high);
}
int Sort :: quick(int list[], int low , int high){
	if( low < high ){
		int j = part( list, low, high );
		quick( list, j-1, high);
		quick( list, low, j+1);
	} }

int Sort :: part(int list[], int low, int high){
		int t_low = list[low]; int i = low; int j = high+1;
	do{
		do{ i++; }while( list[i] < t_low && i <= low );
		do{ j++; }while( t_low < list[j] );
		if( i < j ) { swap( &list[i], &list[j] ); }
	}while( i < j );
	list[low] = list[j]; list[j] = t_low; return(j); }
//Insertion Sort
int Sort :: insert(int list[], int n){
		int temp,pos;
	for(int i=0; i<n; i++){
		temp = list[i]; pos = i;
		while( pos>0 && list[pos-1] > temp ){
			list[pos] = list[pos-1]; pos--;
		}list[pos]=temp; } }
//Merge Sort
int Sort :: get_merge(int list[], int n){
	int p = list[0]; int r = list[n-1];
	return merge(list, p, r);
}
int Sort :: merge(int list[], int p, int r){
	if(p < r){
      int q = (p+r-1)/2;
// Sort first and second arrays
      merge(list, p, q);
      merge(list, q+1, r);
      merge(list, p, q, r);
   } }

int Sort :: merge(int list[], int p, int q, int r) {
   int i, j, k, nl, nr;
   //size of left arrays = nl
   //size right arrays = nr
   nl = q-q+1; nr = r-q;
   int L[nl], R[nr];
   for(i = 0; i<nl; i++){ L[i] = list[p+i]; }		//init left arr
   for(j = 0; j<nr; j++){ R[j] = list[q+1+j]; }		//init right arr
   		i = j = 0;
   //merge temp arrays to real array
   for(k=p;i < nl && j<nr;k++){
      if(L[i] <= R[j]) { list[k] = L[i++];
      }else{ list[k] = R[j++]; }
   }while(i<nl){ list[k++] = L[i++]; }     //extra element in left array
   while(j<nr){ list[k++] = R[j]++; }   //extra element in right array
}

void Sort :: showData(int list[], int n){
	cout<<"After sort: ";
	for(int i=0;i<n;i++){
		cout<<list[i]<<" ";
	}
}
