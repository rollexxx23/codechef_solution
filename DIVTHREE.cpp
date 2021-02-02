#include <bits/stdc++.h>
using namespace std;


void divthree(long long k , long long d , long long sum){
    long long num ;
	num = sum/k ;
	if(num>d){
	    cout<<d<<endl ;
	}else{
	    cout<<num<<endl ;
	}
}

int main() {
	// your code goes here
	//Arin
	
	
	long long test ;
	cin>>test ;
	
	while(test--){
	    long long n,k,d ;
	    cin>> n>>k>>d ;
	    vector <long long> vect(n) ;
	    
	    long long sum = 0 ;
	    for(int i=0 ; i<n ;i++){
	    int a ;     
	    cin>>a ;
	    vect.push_back(a) ;
	    sum = sum + a ;
	}
	
	    divthree(k,d,sum) ;
	
	
	}
	return 0;
}
