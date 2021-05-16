#include <bits/stdc++.h>
using namespace std;

int num = 4000005 ;
int arr[4000005], ans[4000005];


void pre_solve() {
    
	
	for (int i = 0; i < num; i++)
	{
		ans[i] = 0;
		arr[i] = i;
	}

	for (int i = 2; i < num; i++) {
		if (arr[i] == i) {
			arr[i] = i - 1;
			for (int j = 2 * i; j < num; j=j+i)
				arr[j] = arr[j] / i * (i - 1);
		}
	}

	for (int i = 1; i < num; i++) {
		ans[i] = ans[i] + i - 1;
		for (int j = 2 * i; j < num; j = j+ i) {
			ans[j] = ans[j] + i * ((1 + arr[j / i]) / 2);
		}
	}
	
	return ;
}



int main() {
	// your code goes here
	
	
	pre_solve() ;
	
	int test ;
	cin>>test ;
	
	
	
	while(test--) {
	    
	    int k ;
	    cin>>k ;
	    int temp = 4 * k + 1 ;
	    cout << (ans[temp]) <<endl;
	    
	}
	return 0;
}
