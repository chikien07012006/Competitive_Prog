#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[3000],b[3000];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0;cin>>n>>k;
    ll x[n+5];
    For(i,1,n)
    {
        cin>>x[i];
        if(x[i]>0)a[x[i]]++;
        else b[-(x[i])]++;
    }
    For(i,0,2000)
    {
        For(j,i,i+k)
        {
            re=re+a[j]*b[i];
        }
    }
    cout<<re;
}
