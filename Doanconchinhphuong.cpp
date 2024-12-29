#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll nt[5000005];
ll dem[5000005];
ll check[5000005];
ll xl[5000005];
ll k;
void pt()
{
    nt[1]=1;
    For(i,2,5000000)
    {
        if(nt[i]==0)
        {
            nt[i]=i;
            for(ll j=i*i;j<=5000000;j=j+i)
            {
                if(nt[j]==0) nt[j]=i;
            }
        }
    }
}
bool ktr(ll n)
{
    if(n==1) return 1;
    while(n!=1)
    {
        ll tam=nt[n];
        if(check[tam]==0)
        {
            check[tam]=1;
            xl[++k]=tam;
        }
        while(n%tam==0)
        {
            dem[tam]++;
            n=n/tam;
        }
    }
    For(i,1,k)
    {
        if(dem[xl[i]]%2==1) return 0;
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    pt();
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        memset(dem,0,sizeof(dem));
        memset(xl,0,sizeof(dem));
        memset(check,0,sizeof(dem));
        k=0;
        For(j,i,n)
        {
            if(ktr(a[j])==1)
            {
                re++;
            }
        }
    }
    cout<<re;
}
