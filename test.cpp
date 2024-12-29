#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll fnam[1000005],fnu[1000005],re=0;
map<ll,ll>dem;
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a; cin>>a; string n; cin>>n;n='0'+n;
    For(i,1,n.size()-1)
    {
        if(n[i]=='a')
        {
            fnam[i]=fnam[i-1]+1;
            fnu[i]=fnu[i-1];
        }
        if(n[i]=='b')
        {
            fnam[i]=fnam[i-1];
            fnu[i]=fnu[i-1]+1;
        }
    }
    For(i,0,n.size()-1)
    {
        re+=dem[fnam[i]-fnu[i]];
        dem[fnam[i]-fnu[i]]++;
    }
    cout<<re;
}



