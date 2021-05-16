#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test ;
	cin>> test ;
	while(test--) {
	    long long int n ;
	    cin>> n ;
	    
	    
	    long long int layers = n/4 ;
	    int top = n%4 ;
	    if(n<=8) {
	        int ans[8] = {20,36,51,60,76,88,99,104}  ;
	        
	        cout<<ans[n-1] <<endl ;
	        
	    } else {
	    
	    long long int hidden_layers = 44*(n/4) ;
	    long long int ans = 0 ;
	    ans = ans + (hidden_layers) ;
	    
	    int arr[4] = {20,36,51,104} ;
	    if(top!=0) {
	        ans = ans + arr[top-1] ;
	    }
	    
	    int x=0;
		if(n/4!=0&&n/4!=0)
		{
		  x=4-n%4;
		  ans+=4*x;
		  
		  }
		
		cout<<ans<<"\n";
		
	    
	    
	    
	    
	    }  
	    
	    
	    
	}
	return 0;
}
