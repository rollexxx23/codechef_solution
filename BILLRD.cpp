#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test ;
	
	cin>>test ;
	while(test--) {
	    long long n,k,x,y ;
	    cin>>n>>k>>x>>y ;
	      
	    vector<vector<int>> co_ord( 4 , vector<int> (2, 0));
	    k=k%4 ; //the path will be repeated after 4 collisions
	    if(x==y) {
	        cout<<n<<" "<<n<<endl ;
	        continue ;
	        
	    }
	    else if(x>y){
	       
	       y=n+y-x;
	       x=n;
	       
	       co_ord[1][0]=x;
	       co_ord[1][1]=y;
	       
	       x=y+x-n;
	       y=n;
	       
	       co_ord[2][0]=x;
	       co_ord[2][1]=y;

           y=y-x;
	       x=0;
	       co_ord[3][0]=x;
	       co_ord[3][1]=y;
	       x=x+y;
	       y=0;
	       co_ord[0][0]=x;
	       co_ord[0][1]=y;
	        
	        
	    } else {
	        x=n-y+x;
	        y=n;
	        co_ord[1][0]=x;
	        co_ord[1][1]=y;
	        y=y+x-n;
	        x=n;
	        co_ord[2][0]=x;
	        co_ord[2][1]=y;
	        x=x-y;
	        y=0;
	        co_ord[3][0]=x;
	        co_ord[3][1]=y;
	       
	        y=x+y;
	        x=0 ;
	        co_ord[0][0]=x;
	        co_ord[0][1]=y;
	        
	        
	    }
	    
	    
	    
	    cout<<co_ord[k][0]<<" "<<co_ord[k][1]<<endl ;
	    
	    
	    
	    
	}
	return 0;
}
