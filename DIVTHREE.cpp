#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long test ; 
	cin>>test ;
	while(test--) {
	long long n,k,d ;
	cin>> n>>k>>d ;
	long long arr[n] ;
	long long sum = 0 ;
	for(int i=0 ; i<n ;i++){
	    cin>>arr[i] ;
	    sum = sum + arr[i] ;
	}
	long long ans ;
	ans = sum/k ;
	if(ans>d){
	    cout<<d<<endl ;
	}else{
	    cout<<ans<<endl ;
	}
	}
	return 0;
}
