#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll toado[100005];
ll dem[100005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        toado[a[i]]=i;
    }
    ll x=0,y=n+1;
    For(i,1,n)
    {
        if(i%2==1)
        {
            x=x+1;
            ll tam=toado[x];
            dem[x]+=1;
            dem[tam]-=1;
        }
        if(i%2==0)
        {
            y=y-1;
            ll tam=toado[y];
            dem[tam+1]-=1;
            dem[y+1]+=1;
        }
    }
    For(i,1,n) dem[i]=dem[i-1]+dem[i];
    cout<<endl;
    For(i,1,n) cout<<dem[i]<<endl;
}
