#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//Arin
	int test ;
	cin>>test ;
	while(test--) {
	long long n ;
    cin>>n ;
    long long arr[n] ;
    long long ans=INT_MIN ;
    
    for(long long i=0 ; i<n ;i++){
        cin>>arr[i] ;
    }
    long long x,y,z ;
    x=INT_MAX ;
    y=INT_MIN ;
    for(long long i=0 ; i<n ;i++){
        x = min(x, arr[i]);
        y = max(y, arr[i]);
    }
    for(long long i=1 ; i<n-1 ;i++){
        z = arr[i] ;
        ans = max(ans, (abs(x-y)+abs(z-y)+abs(x-z)));
    }
    
	    cout << ans << endl ;
	}
	return 0;
}
