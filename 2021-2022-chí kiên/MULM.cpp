#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    freopen("MULM.inp","r",stdin);
    freopen("MULM.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll l,r; cin>>l>>r;
    if(r-l>=2022) cout<<0;
    else
    {
        ll re=l;
        For(i,l+1,r)
        {
            re=((re%2022)*(i%2022))%2022;
        }
        cout<<re;
    }
}

