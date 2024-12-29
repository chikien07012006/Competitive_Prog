#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0; cin>>n>>k;
    ll a[n+5]; For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        ll ma=a[i],mi=a[i];
        For(j,i,n)
        {
            ma=max(ma,a[j]);
            mi=min(mi,a[j]);
            if(ma-mi==k)re++;
        }
    }
    cout<<re;
}







