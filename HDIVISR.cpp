#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n ;
	int ans ;
	cin>>n ;
	for(int i =1 ; i<=9 ; i++){
	    if(n%i==0){
	        ans= i ;
	        
	    }
	}
	cout << ans ;
	return 0;
}
