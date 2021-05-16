#include <bits/stdc++.h>
using namespace std;


const int n = 1000000;
int prime_count[n + 1];

// count no of prime no before 
void sieve_of_ertho()
{
    bool is_prime[n + 1];
    memset(is_prime, true, sizeof(is_prime));

    for(int i = 2; i * i <= n; i++)
    {
        if(is_prime[i] == true)
        {
            for(int j = i * 2; j<= n; j+= i)
            {
                is_prime[j] = false;
            }
        }
    } 

    prime_count[0] = prime_count[1] = 0;
    for(int i = 2; i<= n; i++)
    {
        prime_count[i] = prime_count[i-1];
        if(is_prime[i]) prime_count[i]++;
    }
}



int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    sieve_of_ertho();
	int test;
	cin>>test;
	while(test--)
	{
	    long long x, y; cin>>x>>y;
        if(prime_count[x] > y) cout<<"Divyam"<<"\n" ;
        else cout<<"Chef"<<"\n" ;
        
    
	}
	return 0;
}
