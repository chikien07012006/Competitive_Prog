#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0;cin>>n;ll a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll d=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]==a[i+1])d++;
        else
        {
            re=re+d*(d-1)/2+d;
            d=1;
        }
    }

            re=re+d*(d-1)/2+d;
    cout<<re;
}
