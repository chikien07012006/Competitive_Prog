#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    //freopen("XAUCON.INP","r",stdin);
    //freopen("XAUCON.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    ll l=-1,r=0,re=0;
    n+='1';
    For(i,0,n.size()-1)
    {
        if(n[i]=='1')
        {
            r=i;
            re=max(re,r-l-1);
            l=i;
        }
    }
    cout<<re;
}

