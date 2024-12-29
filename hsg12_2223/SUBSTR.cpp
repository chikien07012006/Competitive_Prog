#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    freopen("SUBSTR.INP","r",stdin);
    freopen("SUBSTR.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll re=0,d=1;
    string a; cin>>a;
    For(i,0,a.size()-1)
    {
        if(a[i]==a[i+1])
        {
            d++;
        }
        else
        {
            re=max(re,d);
            d=1;
        }
    }
    cout<<re;
}
