#include<bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    long long m; cin>>m;
    while(m--)
    {
        long long i,j; char a,b; cin>>i>>j>>a>>b;
        for(long long k=i;k<=j;k++)
        {
            if(n[k]==a)n[k]=b;
        }
    }
    cout<<n;
}