#include <bits/stdc++.h>
using namespace std;
int solve(){
       int n ;
	    cin>> n ;
	    int arr[n] ;
	    for(int i =0 ; i< n ; i++) {
	        cin>>arr[i] ;
	    }
	    sort(arr,arr+n) ;
        int a=0 ;
    
        
	    for(int i=0 ;i<n ;i++)
		{
		if(arr[i] > (i+1))        //permutation not possible
		{  
		    
			a=0;
			break;
		}
		   else	if(arr[i] < (i+1))
			{   
			    int times = i+1-arr[i] ;
				a=a+times;        //will decide number of times addition is required
			}
		}
		return a ;
}
int main() {
	// your code goes here
	int test ;
	cin >> test ;
	while(test--) {
	    int ans ;
	    ans = solve() ;
	   // cout<< ans ;
		if(ans%2!=0)
		{
			cout<<"First"<<endl ;
		}
		else
		{
			cout<<"Second"<<endl ;
		}
	}
	
	return 0;
}
