#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
long long x,n,tich,tong;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; double a[n+5],re=1e18;
    For(i,1,n)
    {
        cin>>a[i];
        if(i>1)
        {
            if(a[i]<a[i-1])
            {
                cout<<-1; return 0;
            }
        }
    }
    For(i,1,n)
    {
        if(i>1)
        if(a[i]>a[i-1])
        {
            re=min(re,a[i]-a[i-1]);
        }
    }
    if(re==1e18) cout<<0;
    else cout<<re;
}



