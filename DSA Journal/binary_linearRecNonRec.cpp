#include<iostream>
using namespace std;
class Search{
    public:
    // Recursive and non-recursive
    // binarySearch
    int rbiSearch(int list[], int key, int low, int high); 
    int nbiSearch(int list[], int key, int low, int high); 
    // linearSearch
    int rlSearch(int list[], int key, int n);
    int nlSearch(int list[], int key, int n);
    // utility members
    void check(int pos);
}; //end of class Search
    
    int main(){
        //var init
        int ch, n, key, list[20], pos;
        Search s;   //class obj
        //get list 
    cout<<"\nEnter number of elements: "; cin>>n;
        //get elements
    cout<<"\nEnter "<<n<<" elements in ascending order: ";
        for(int i=0; i<n; i++){ cin>>list[i]; }
        //get key
    cout<<"\nEnter key element: "; cin>>key;

    //Search menu
    cout<<"\nBinary_Search :: 1]recur\t2]non-recur\nLinear_Search :: 3]recur\t4]non-recur\n5]Exit\n";
    do{
        cout<<"\nEnter choice: ";   cin>>ch;
        switch (ch){
        case 1: pos = s.rbiSearch(list, key, 0, n-1); s.check(pos);   break;
        case 2: pos = s.nbiSearch(list, key, 0, n-1); s.check(pos);   break;
        case 3: pos = s.rlSearch(list, key, n); s.check(pos);   break;
        case 4: pos = s.nlSearch(list, key, n); s.check(pos);   break;
        case 5: exit(1);    break;
        default:    cout<<"\nTry again\n";  break;
        }}while(ch != 5);   return 0;
    }
    
//utility member Check
void Search :: check(int pos){
    if(pos == -1){ 
	cout<<"\nElement not found!";
    }else{ 
	cout<<"\nElement found at "<<pos<<"th index.\n"; 
	} }

// Recursive "linear" Search
int Search :: rlSearch(int list[], int key, int n){
    if(n<=0){
		return -1;
	}else if(list[n]==key){
		return n;
		}else{
		return rlSearch(list, key, n-1);
	} }

// Non-Recursive "linear" Search
int Search :: nlSearch(int list[], int key, int n){
        int pos=-1;
    for(int i=0;i<n;i++){
        if(key == list[i]){ 
			pos = i; break;
		} }   return pos; 
	} 

//Recursive "binary" Search
int Search :: rbiSearch(int list[], int key, int low, int high){
        int mid, pos = -1;
    while (low <= high){
        mid = (low + high) / 2;
    if(key == list[mid]){ 
		pos = mid; return pos; 
        } else if(key < list[mid]){ 
			return rbiSearch(list, key, low, mid-1);
        } else { 
			return rbiSearch(list, key, mid+1, high);
		} }   return pos; 
	}

// Non-Recursive "binary" Search 
int Search :: nbiSearch(int list[], int key, int low, int high){
        int mid, pos = -1;
    while (low <= high){
        mid = (low + high) / 2;
    if(key == list[mid]){ 
		pos = mid; break;
	} else if(key < list[mid]){
        high = mid-1;
		} else { 
			low = mid+1; 
			} } }
    

