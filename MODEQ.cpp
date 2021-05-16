#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	int test ;
	cin>>test ;
	
	
	while(test--) {
	    
	    int N , M ;
	    cin>>N>>M ;
	    
	    long long res = 0 ;
	    
	    for(int i =1 ; i<N ; i++) {
	        if(i==1) {
	            res = res + N -1 ;   // pair of everyother with 1
	            
	        }
	        else {
	            long long a = M%i;
	            
	            
	            for(int j = i+1; j<N+1; j++){
	                
				int b = (M%j)%i;
				if(a==b){                                //((M mod a) mod b)=((M mod b) mod a) .
					res++ ;
				}
			}
	        }
	    }
	    
	    cout<<res<<endl ;
	    
	    
	}
	return 0;
}
