#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    re=a[1];
    For(i,2,n) re=__gcd(re,a[i]);
    if(re==1) cout<<-1;
    else
    {
        ll c=0;
        For(i,2,sqrt(re))
        {
            if(re%i==0)
            {
                cout<<i;
                return 0;
            }
        }
        cout<<re;
    }
}

