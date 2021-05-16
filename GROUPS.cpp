#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test ; 
	cin>>test ; 
	while(test--) {
	    string s ;
	    cin >> s ;
	    int group = 0 ;
	    for(int i =0 ; i<s.length() ; i++) {
	        if(s[i]=='1'){
	            group++ ;
	        }
	    }
	    for(int i = 0; i < s.length()-1 ; i++ ) {
         if((s[i] == '1' ) && (s[i+1] == '1')){
             group-- ;                 //same group
        }
      }
      std::cout << group << std::endl;
	}
	return 0;
}
