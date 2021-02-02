#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test ;
	cin>>test ;
	while(test--){
	    int n ;
	    cin>>n ;
	    int arr[n] ;
	    int sum = 0 ;
	    for(int i=0 ; i<n ; i++){
	        cin>>arr[i] ;
	        sum = sum + arr[i] ;
	    }
	    if(sum%2==0){
	        cout<<1 << endl ;
	    } else {
	        cout<<2 <<endl ;
	    }
	}
	return 0;
}
