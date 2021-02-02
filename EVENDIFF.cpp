#include <iostream>
using namespace std;

int main() {
	// your code goes here
	short test ;
	cin>>test ;
	while(test--){
	    int n;
	    cin>>n ;
	    int arr[n] ;
	    for(int i=0 ;i<n ; i++){
	        cin>>arr[i] ;
	    }
	    int odd_c =0 ;
	    int even_c =0 ;
	    for(int i =0 ; i<n ; i++){
	        if(arr[i]%2==0){
	            even_c ++ ;
	        } else {
	            odd_c ++ ;
	        }
	    }
	    if(odd_c>even_c){
	        cout<<even_c<<endl ;
	    } else {
	        cout<<odd_c<<endl ;
	    }
	}
	return 0;
}
