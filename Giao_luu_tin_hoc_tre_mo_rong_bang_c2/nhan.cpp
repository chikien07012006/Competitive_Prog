#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,ht=1;
    cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i]; if(a[i]==0) {cout<<0;return 0;}
    }
    For(i,1,n)
    {
        if(ht*a[i]>1000000000000000000)
        {
            cout<<-1;return 0;
        }
        ht=ht*a[i];
    }
    cout<<ht;
}
