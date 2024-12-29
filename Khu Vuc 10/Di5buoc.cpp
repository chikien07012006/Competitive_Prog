#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    long long n; cin>>n;
    if(n%5!=0)
    {
        cout<<n/5+1; return 0;
    }
    cout<<n/5;
}