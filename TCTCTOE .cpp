#include <bits/stdc++.h>
using namespace std;

string a[3] ;



bool check_winner(char j) {                          // horizantal , vertical and diagonal
    if (a[0][0] == j && a[0][0] == a[1][1] && a[1][1] == a[2][2])
        return 1;

    if (a[0][2] == j && a[0][2] == a[1][1] && a[1][1] == a[2][0])
        return 1;

    for (int i = 0; i < 3; i++) {
        if (a[i][0] == j  && a[i][0] == a[i][1] && a[i][1] == a[i][2])
            return 1;
        if (a[0][i] == j && a[0][i] == a[1][i] && a[1][i] == a[2][i])
            return 1;
    }

    return 0;
}




int validity_check(int x_count , int o_count , int space_count) {
    //impossible condition
    if (x_count < o_count)            //x goes first
        return 3;
    if (x_count >o_count + 1)
        return 3;
        
    bool x_winner = check_winner('X');
    bool o_winner = check_winner('O');

    if (x_winner && o_winner)                  //both cant win 
        return 3;

    if (x_winner &&x_count == o_count)
        return 3;

    if (o_winner && x_count > o_count)             //should be equal
        return 3;
//possible condition
    if (x_winner || o_winner)
        return 1;

    if (space_count == 0)
        return 1;
//else
    return 2;
}

int main() {
	// your code goes here
	int test ;
	cin>>test ;
	
	
	while(test--) {
	    for(int i=0 ; i<3 ; i++) {
	        cin>> a[i] ;
	    }
	    
	    int x_count , o_count , space_count ;
	    x_count = o_count = 0 ;
	    
	    for(int i=0 ; i<3 ; i++) {
	        for(int j=0 ; j<3 ; j++) {
	            if (a[i][j] == 'X')
                x_count++;

            if (a[i][j] == 'O')
                o_count++;
	        }
	    }
	    
	    space_count = 9 - x_count - o_count ;
	    
	    
	    int ans ;
	    
	    ans = validity_check(x_count , o_count , space_count) ;
	    
	    cout<<ans<<endl ;
	    
	    
	    
	    
	}
	return 0;
}
