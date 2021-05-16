#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	// your code goes here
	ll test ;
	cin>> test ;
	while(test--) {
	    ll c ;
	    cin>> c ;
	    ll a , b , x ;
	    a=0 ;
	    b=0 ;
	    x=0 ;
	    for (ll i = 0 ; ; i++){
	        x=c%2 ;
	        if(c>=2) {
	            if(x==0){
	                ll d = pow(2,i) ;
	                a = a + d ;
	                b = b + d ;
	                
	            } else if (x==1) {
	                b = b + pow(2,i) ;
	            }
	        }
	            
	            if (c<2) {
	                a = a + pow(2,i) ;
	                break ;
	            }
	            c= c/2 ;
	        }
	        
	        
	    
	    
	    cout<<a*b<<endl ;
	}
	return 0;
}
