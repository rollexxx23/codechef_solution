#include <iostream>
using namespace std;

void decodeit(int n , char strng[]){
    char c ;
    long long sum=0 ;
    for(int i=0;i<n;i+=4)
        {
            sum=((strng[i]-'0')*8)+((strng[i+1]-'0')*4)+((strng[i+2]-'0')*2)+((strng[i+3]-'0')*1);   //similar to binary to decimal conversion
            c=(sum+'a');
            cout<<c;
        }
}

int main() {
	// your code goes here
	//Arin
	
	long long test ;
	cin>> test ;
	
	while(test--) {
	    long long n;
	    cin>>n ;
	    char strng[n] ;
	    cin>>strng ;
	    decodeit(n,strng) ;
	    
	    cout<<endl ;
	    
	}
	return 0;
}
