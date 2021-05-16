#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//Arin
	int test ;
	cin>>test ;
	while(test--) {
	    int n ;
	    cin>> n ;
	    int weight[n] ;
	    int position[n] ;
	    
	    int temp ;
	    int a,s2,sp,kp,pos,hp,ans,x;
	    for(int i=0 ; i<n ; i++) {
	        cin>>weight[i] ;
	        
	    }
	    for(int i=0 ; i<n ; i++) {
	        cin>>position[i] ;
	        
	    }
	    if(n==2){                   // for initial constraints n=2
	    
	    if(weight[0]<weight[1]){
	        cout<<0 ;
	    } else {
	        if(position[0]==1){
	            cout<< 2 ;
	        }else {
	            cout<<1 ;
	        }
	    }
	    } else {
	        a=weight[0];
            sp=0;      
            for(int i=0; i<n; i++)
            {
                if(weight[i]<a)
                {
                    a=weight[i];
                    sp=i;
                }
            }
             x=1;
             kp=sp;
             ans=0;
               while(x<n)
        {
            a=weight[kp];
            
            s2=0;
            while(s2<5)
            {
                s2=a+1;
                for(int i=0;i<n;i++)
                {
                    if(weight[i]==s2)
                      kp=i;
                }
                if(weight[kp]==s2)   
                {
                    x++;
                    break;
                }
            }
            
            pos=kp;
            while(pos<(sp+1))
            {   
                pos+=position[kp];
                ans++;
               
            }
            sp=pos;
        }
        cout<<ans;
	}
	    

	    
	   cout<<endl ; 
	}
	return 0;
}
