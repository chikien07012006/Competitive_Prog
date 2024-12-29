#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0;cin>>n;ll a[n+5],b[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(ll i=2;i<=n;i++)
    {
        if(a[i]==a[i-1])
        {
            if(b[i]>b[i-1]){re=re+b[i-1];a[i-1]=a[i-1]+1;}
            else{re=re+b[i];a[i]=a[i]+1;}
        }
    }
    cout<<re;
}
