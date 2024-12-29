#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<long long,int>d;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,q; cin>>n>>q; ll a[n+5];ll t=0;
    for(int i=1;i<=n;i++){cin>>a[i];d[a[i]]++;t=t+a[i];}
    ll x,y;
    for(int i=1;i<=q;i++)
    {
        cin>>x>>y;
        if(x!=y)
        {
            t=t-d[x]*x;
            t=t+d[x]*y;
            d[y]=d[y]+d[x];
            d[x]=0;
        }
        cout<<t<<"\n";
    }
}
