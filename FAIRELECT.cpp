#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
    cin >> t;
    while (t--) {
        
        long long n, m;
        cin >> n >> m;
        
        vector <long long> arr1, arr2 ;
        long long s1(n) , s2(m) ;
        s1=s2=0 ;
        
         for (int i = 0; i < n; i++) {
            
            long long x;
            cin >> x;
            arr1.push_back(x);
            s1 += x;
        }
        for (int i = 0; i < m; i++) {
            
            long long x;
            cin >> x;
            arr2.push_back(x);
            s2 += x;
        }
        int flag=1 ;
       
        
        
        int i=0 ;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        while((s1<=s2) && (i<m && i<n)){
            s1 = s1 + arr2[m-1-i] - arr1[i];
            s2 = s2 + arr1[i] - arr2[m-1-i];
            i++ ;
           
        }
        if(s1<=s2)
         flag=-1;
         
         if(flag<0)
            cout<<-1<<endl;
        else cout<<i<<endl;
        
        
        
    
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}
