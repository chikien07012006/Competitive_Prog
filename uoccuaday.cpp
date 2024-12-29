#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll check[1000005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,dem=0,xuli=0,re=0; cin>>n>>k; ll a[n+5];
    For(i,1,n) cin>>a[i],xuli=max(xuli,a[i]);
    For(i,1,n)
    {
        if(a[i]-k<=0)
        {
            dem++;
            check[0]++;
            check[a[i]+1]--;
        }
        else
        {
            check[a[i]-k]++;
            check[a[i]+1]--;
        }
    }
    dem=n-dem;
    For(i,1,xuli)
    {
        check[i]=check[i-1]+check[i];
    }
    ll d=0;
    For(i,2,xuli)
    {
        ll tam=dem;
        for(ll j=i;j<=xuli;j=j+i)
        {
            if(check[j]!=0) tam-=check[j];
            if(tam==0)
            {
                re=max(re,i);
                break;
            }
        }
    }
    cout<<re;
}
