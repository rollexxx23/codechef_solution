#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long test,n,i,sum,j,k;
    cin>>test;
    while(test--)
    {   char ch;
        cin>>n;
        char str[n];
        cin>>str;
        for(i=0,j=0;i<n;i+=4,j++)
        {
            sum=((str[i]-'0')*8)+((str[i+1]-'0')*4)+((str[i+2]-'0')*2)+((str[i+3]-'0')*1);
            ch=(sum+'a');
            cout<<ch;
        }
        cout<<endl;
    }
return 0;
}
