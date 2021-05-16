#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n , h , x ;
	cin>> n >> h >> x ;
	int arr[n] ;
	for(int i=0 ; i< n ; i++) {
	    cin >> arr[i] ;
	}
	int flag = 0 ;
	for (int i =0 ; i<n ; i++) {
	    if((arr[i]+x)>=h) {
	        flag = 1 ;
	        cout<< "YES" ;
	        break ;
	    }
	}
	if(flag==0) {
	    cout << "NO" ;
	} 
	return 0;
}
