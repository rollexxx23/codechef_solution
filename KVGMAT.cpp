#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test ;
	cin>> test ;
	while(test--) {
	    long long int m , n  ;
	    long double k ;
	    cin>>m>>n>>k ;
	    
	    long long int arr[m][n] ;
	    
	     
	    
	    
	    long long int arr1[m+1][n+1] ={};
	    
	    for(long long int i = 1 ; i<m+1 ; i++) {
	        for(long long int j=1 ; j<n+1 ; j++) {
	            cin>> arr[i-1][j-1] ;
	            arr1[i][j] = arr1[i - 1][j] + arr1[i][j - 1] - arr1[i - 1][j - 1] + arr[i - 1][j - 1];
	        }
	    }
	    
	    long long int size = 1 ;
	    
	    long double sum = 0 ;
	    long long int ans = 0 ;
	    
	   long long int max_size = min(m,n) ;
	    
	    while(size <= max_size) {
	        for( long long int i = size ; i<m+1 ; i++) {
	            for(long long int j = size ; j<n+1 ; j++) {
	                 if(i - size >= 0 && j - size >= 0)
                {
                    sum = arr1[i][j] - arr1[i][j - size] - arr1[i - size][j] + arr1[i - size][j - size];
                    if((sum/(size*size))>=k)                
                            {
                                ans++;
                            }
                }
	            }
	        }
	        
	        size++ ;
	    }
	    
	    cout<<ans<<endl ;
	}
	return 0;
}
