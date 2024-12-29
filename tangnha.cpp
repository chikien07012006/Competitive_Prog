#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct ok{
    ll vitri;
    ll giatri;
};
ok dem[100005];
bool sx(ok trc, ok sau)
{
    return trc.vitri<sau.vitri;
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n,re=0,tam=0,u=0,xuli; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    a[0]=0, a[n+1]=0;
    For(i,1,n)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            dem[++u].vitri=max(a[i-1],a[i+1])+1;
            dem[u].giatri=+1;
            dem[++u].vitri=a[i]+1;
            dem[u].giatri=-1;
        }
    }
    sort(dem+1,dem+1+u,sx);
    For(i,1,u)
    {
        tam+=dem[i].giatri;
        re=max(re,tam);
    }
    cout<<re;
}
