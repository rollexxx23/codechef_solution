#include <bits/stdc++.h>
using namespace std;


void billrd(long long n , long long k , long long x , long long y ){
        k=k%4 ;    // pattern is repeated after 4 collision
        long long array[4][2] ;
	    if(x==y) {
	       cout<<n<<" "<<n<<endl ;   // it will enter the top-right hole
	        
	        
	    }
	    else if(x>y){       // it will touch the right side
	       
	       y=n+y-x;
	       x=n;
	       
	       array[1][0]=x;
	       array[1][1]=y;
	       
	       x=y+x-n;
	       y=n;
	       
	       array[2][0]=x;
	       array[2][1]=y;

           y=y-x;
	       x=0;
	       array[3][0]=x;
	       array[3][1]=y;
	       x=x+y;
	       y=0;
	       array[0][0]=x;
	       array[0][1]=y;
	       cout<<array[k][0]<<" "<<array[k][1]<<endl ;
	        
	        
	    } else {      // it will touch the top 
	        x=n-y+x;
	        y=n;
	        array[1][0]=x;
	        array[1][1]=y;
	        y=y+x-n;
	        x=n;
	        array[2][0]=x;
	        array[2][1]=y;
	        x=x-y;
	        y=0;
	        array[3][0]=x;
	        array[3][1]=y;
	       
	        y=x+y;
	        x=0 ;
	        array[0][0]=x;
	        array[0][1]=y;
	        cout<<array[k][0]<<" "<<array[k][1]<<endl ;
	        
	    }
	    
	    
	    
	    
}

int main() {
	// your code goes here
	//Arin 
	
	int test ;
	
	cin>>test ;
	while(test--) {
	    long long n,k,x,y ;
	    cin>>n>>k>>x>>y ;
	    billrd(n,k,x,y) ;
	    
	    
	}
	return 0;
}

