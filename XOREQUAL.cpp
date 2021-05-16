#include <bits/stdc++.h>
using namespace std;

int solve(long long x, unsigned int y, int mod = 1000000007 )
{
    int res = 1;    
 
    x = x % mod; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % mod;
 
        
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}

int main() {
	// your code goes here
	//Arin
	int test ;
	cin>>test ;
	
	
	while(test--) {
	    long long n ;
	    cin>>n ;
	    cout<<solve(2,n-1)<<endl ;
	}
	return 0;
}
