#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        ll l,r,re=0; cin>>l>>r;
        vector<bool>KT(r-l+1,true);
        for(ll i=2;i*i<=r;i++)
        {
            for(ll j=max(i*i,(l+i-1)/i*i);j<=r;j=j+i)
            {
                KT[j-l]=false;
            }
        }
        if(1>=l)
        {
            KT[1-l]= false;
        }
        for(ll x=l;x<=r;x++)
        {
            if(KT[x-l]) re++;
        }
        cout<<re<<"\n";
    }
}

