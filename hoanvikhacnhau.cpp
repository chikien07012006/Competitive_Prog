#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)

signed main()
{
    ios_base::sync_with_stdio(0);
    ll a,n,k,b,d=0; cin>>a>>n>>k>>b;
    while(k>0&&n>0)
    {
        if(k<a) a=k;
        n=n-a*b;
        k=k-(a-1);
        d++;
    }
    if(k==0&&n>0)
    {
        d=d+n/b+1;
        if(n%b==0) d--;
    }
    cout<<d;
}