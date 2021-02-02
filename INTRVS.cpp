#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test ;
	cin>>test ;
	while(test--){
	    int n , k ;
	    cin>>n>>k ;
	    int arr[n] ;
	    int total = 0 ;
	    int req = ceil(n/2.0);
	    int slow = 0 ;
	    int bot = 1 ;
	    for(int i=0 ; i<n ; i++){
	        cin>>arr[i] ;
	    }
	    
	    for(int i=0 ; i<n ; i++){
	        if(arr[i]!=-1){
	            total++ ;
	        }
	        if(arr[i]>k){
	            slow = 1 ;
	        }
	        if(arr[i]>1){
	            bot = 0 ;
	        }
	        
	        
	    }
	    
	    if(total<req) cout<<"Rejected"<<endl ;
	    else if(slow==1) cout<<"Too Slow"<<endl ;
	    else if(bot==1 & total==n) cout<<"Bot"<<endl ;
	    else cout <<"Accepted"<<endl;
	    
	    
	}
	return 0;
}
