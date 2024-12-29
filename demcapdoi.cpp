#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>d;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0;cin>>n>>k;ll a[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
            ll h=k-a[i];
            if(d[h]>0)
            {
                re=re+d[h];
            }
            d[a[i]]++;
    }
    cout<<re;
}
