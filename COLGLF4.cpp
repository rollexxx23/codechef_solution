#include <bits/stdc++.h>
using namespace std;
long long solve(long long n ,long long e ,long long h ,long long a ,long long b ,long long c ) {
    long long result = 1e15 ;
    
    
    if(n<=0) {                                    //base case
        return 0 ;
    }
    if(2*n<=e){                                                     //case 1 omellette 
        result = min(result , n*a) ;
    }
    if(3*n<=h) {                                        //case 2   milkshake
        result = min(result,n*b) ;
    }
    if(n<=h && n<=e) {                                          //case 3 cake
        result = min(result,n*c) ;
    }
    if((h-n)/2>=1 && (h-n)/2>=(n-e)) {       //case 4
        long long temp ;
        if(b<c) {
            temp = min(n-1,(h-n)/2) ;
            result = min(result , temp*(b-c)+n*c) ;
            
        } else {
            temp = max((long long)1,n-e) ;
            result = min(result, temp*(b-c)+n*c) ;
        }
    }
    if(e/2>=1 && ((n - e/2)*3 <= h)){
        long long temp ;
        if(a<b){
           temp = min(n-1,e/2) ;
           result = min(result, temp*(a-b)+n*b) ;
        }else {
            temp = max((long long)1,(3*n-h+2)/3 ) ;
            result = min(result ,temp*(a-b)+n*b) ;
        }
    }
    if(((e-n)>=1) && ((e+h)>=2*n)){
        long long temp ;
        if(a<c){
        temp = min(n-1 , e-n) ;
        result = min(result,temp*(a-c)+n*c) ;
            
        } else {
            temp = max((long long)1,n-h) ;
            result = min(result, temp*(a-c)+n*c) ;
        }
    }
    if(n>=3 && e>=3 && h>=4) {
        result = min(result ,a+b+c + solve(n-3,e-3,h-4,a,b,c)) ;
    }
    
        return result ;
        
    
    
    
    
}
int main() {
	// your code goes here
	long long test ;
	cin>>test ;
	while(test--) {
	    long long n , e , h , a , b , c ;
	    cin>>n>>e>>h>>a>>b>>c ;
	   long long ans = solve(n,e,h,a,b,c) ;
	   if(ans == 1e15){
	       cout<<-1<<endl ;
	   } else {
	   cout<<ans<<endl ;
	   }
	   
	}
	return 0;
}

