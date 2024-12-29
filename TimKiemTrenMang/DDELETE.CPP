#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
 //   freopen("DDELETE.INP","r",stdin);
   // freopen("DDELETE.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,t=0,chan=0,le=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],t=t+a[i];
    if(t%2==1)
    {
        ll re=0;
        For(i,1,n)
        {
            if(a[i]%2==0)
            {
                chan++;
                re=re+le;
            }
            else
            {
                le++;
                re=re+chan;
            }
        }
        cout<<re;
    }
    else
    {
        ll re=0;
        For(i,1,n)
        {
            if(a[i]%2==0)
            {
                re=re+chan;
                chan++;
            }
            else
            {
                re=re+le;
                le++;
            }
        }
        cout<<re;
    }
}




