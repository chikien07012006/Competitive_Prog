#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        ll t=1;
        For(j,i,n)
        {
            t=t*a[j];
            if(t%2==0&&t>0)
            {
                re=max(re,j-i+1);
            }
        }
    }
    cout<<re;
}



