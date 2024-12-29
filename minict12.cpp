#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>d;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,res=0,j=0,luui,luuj,x=0; cin>>n>>k; ll a[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        while(j<n&&(x<k||(x==k&&d[a[j+1]]!=0)))
        {
            j++;
            if(d[a[j]]==0)x++;
            d[a[j]]++;
            if(j>n)break;
        }
        if(j-i+1>res)
        {
            res=j-i+1; luui=i;luuj=j;
        }
        d[a[i]]--;
        if(d[a[i]]==0)x--;

    }
    cout<<luui<<' '<<luuj;
}
