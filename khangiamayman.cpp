#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>d;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        if(i-a[i]>0)
        {
            if(d[i-a[i]]>0)re=re+d[i-a[i]];
        }
        d[i+a[i]]++;
    }
    cout<<re;
}


