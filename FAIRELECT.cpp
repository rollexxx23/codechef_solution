#include <bits/stdc++.h>
using namespace std;



void fairelect(long long n , long long m , long long sum1 , long long sum2 , vector<long long> array1 , vector<long long> array2) {
    int flag=1 ;
       
        
        
        int k=0 ;
        
        sort(array1.begin(), array1.end());
        sort(array2.begin(), array2.end());
        while((sum1<=sum2) && (k<m && k<n)){
            sum1 = sum1 + array2[m-1-k] - array1[k]; //Add maximum of 2nd array subtract minimum of 1st
            sum2 = sum2 + array1[k] - array2[m-1-k];  // Add min of 1st array subtract max of 2nd
            k++ ;
           
        }
        
        
        if(sum1<=sum2)   // if making 1st candiate win is not possible
         flag=-1;
         
         if(flag<0)
            cout<<-1<<endl;    
        else cout<<k<<endl;    //ans
}

int main() {
	// your code goes here
	//Arin
	
	
	long long test ;
	cin >> test ;
	while(test--){
	    long long n, m;
        cin >> n >> m;
        long long sum1(n) , sum2(n) ;
        vector <long long> array1 , array2 ;
        sum1=0 ;    
        sum2=0 ;
         for (int i = 0; i < n; i++) {
            
            long long a;
            cin >> a;
            array1.push_back(a);
            sum1 = sum1 + a;
        }
        
        for (int i = 0; i < m; i++) {
            
            long long a;
            cin >> a;
            array2.push_back(a);
            sum2 = sum2 + a;
        }
        
        fairelect(n,m,sum1,sum2,array1,array2) ;
	}
	return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}
