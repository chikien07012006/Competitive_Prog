#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll x,ll y)
{
   ll a=x,b=y,t;
    while(a>0)
    {
        t=a;
        a=b%a;
        b=t;
    }
    return b;
}
ll a[199999999];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll t,b[n+5];
    cin>>t>>b[1];a[b[1]]++;
    cout<<b[1]<<endl;
    for(ll i=2;i<=n;i++)
    {
        cin>>t>>b[i];
        if(t==1)a[b[i]]++;
        else a[b[i]]--;
        ll re;
            for(ll j=1;j<=i;j++)if(a[b[j]]>=1){re=b[j];break;}
            for(ll j=1;j<=i;j++)
            {
                if(a[b[j]]>=1){re=ucln(re,b[j]);}
            }
            cout<<re<<endl;
    }
}
