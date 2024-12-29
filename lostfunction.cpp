#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
map<long long,ll> d;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("lostfunction.INP","r",stdin);
    //freopen("lostfunction.OUT","w",stdout);
    ll re,ma=0;
    ll n; cin>>n; ll a[n+5];
    For(i,1,n) {cin>>a[i];
    d[a[i]]++;
    }
    For(i,1,n)
    {
        if(ma<a[i]*d[a[i]])
        {
            ma=a[i]*d[a[i]];
            re=a[i];
        }
    }
    cout<<re;
}

