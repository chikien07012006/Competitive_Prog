#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[10000005],d[10000005];
void sang()
{
    For(i,2,1e5)
    {
        for(ll j=i*2;j<=1e5;j=j+i)f[j]++;
    }
    For(i,1,1e5)
    {
        if(f[i]==6)d[i]=d[i-1]+1;
        else d[i]=d[i-1];
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    sang();
    ll q; cin>>q;
    while(q--)
    {
        ll l,r; cin>>l>>r; cout<<d[r]-d[l-1]<<endl;
    }
}
