#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll T; cin>>T;
    while(T--)
    {
    ll n; cin>>n; ll a[n+5];
    For(i,1,n) a[i]=0;
    ll i=1;
    while(i<=n)
    {
        ll j=i;
        while(j<=n)
        {
        if(a[j]==0)a[j]=1;
        else a[j]=0;
        j=j+i;
        }
        i++;
    }
    cout<<a[n]<<endl;
    }
}
