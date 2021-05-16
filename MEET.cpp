#include <bits/stdc++.h>
using namespace std;

int solve(string time) {
    int hour_10th = (int)time[0] - '0' ;
    int hour_1s = (int)time[1] - '0' ;
    int min_10th = (int)time[3] - '0' ;    // skipping : 
    int min_1s = (int)time[4] - '0' ;
    
    int hour = hour_1s + hour_10th*10 ;
    int min = min_1s + min_10th*10 ;
    int ans = 0;
    
    char time_per = time[6] ;   // AM or PM , Skipping blank 
     // converting to 24 hour 
    if(time_per == 'A'){
    if(hour == 12){
      hour = hour - 12;   // for AM 
    }
  } else {
    if(hour != 12){
      hour = hour + 12;   // for PM
    }
  }
  ans = hour*100 + min ;  
  return ans ;
    
}

int main() {
	// your code goes here
	//Arin
	int test ;
	cin>>test ;
	while(test--){
	  string time , time_per ; 
	  cin>> time >> time_per ;
	  time = time + " " + time_per ;  // time and time period 
	  int n ;
	  cin>> n ;
	  
	  string left , left_per , right , right_per ;
	  
	  for(int i=0 ; i<n ; i++) {
	      cin>> left>>left_per>>right>>right_per ;
	      left = left + " " + left_per ;
	      right = right + " " + right_per ;
	      
	     if((solve(left) <= solve(time)) && (solve(right) >= solve(time)))
	      cout<<"1" ;
	     else 
	      cout<<"0" ;
	  }
	  cout<<endl ;
	  
	}
	
	return 0;
}
