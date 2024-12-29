#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,x,re=0; cin>>n>>x; ll a[n+5];
    For(i,1,n) cin>>a[i];
    for(ll i=2;i<=n;i++)
    {
        if(a[i]+a[i-1]>x)
        {

            re=re+((a[i]+a[i-1])-x);
            a[i]=a[i]-((a[i]+a[i-1])-x);
            if(a[i]<0)
            {
                a[i-1]=a[i-1]-abs(a[i]);
                a[i]=0;
            }
        }
    }
    cout<<re;
}



