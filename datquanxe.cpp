#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[20],re=0,a[20][20],f[20];
void sinh(ll n,ll j)
{
    For(i,1,n)
    {
        if(f[i]==0)
        {
        d[j]=i; f[i]=1;
        if(j==n)
        {
            ll tam=0,fl=0;
                For(k,1,n)tam=tam+a[k][d[k]];
                re=max(re,tam);
        }
        else
        {
            sinh(n,j+1);
        }
        f[i]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    For(z,1,T)
    {
        ll n; cin>>n;
        For(i,1,n)For(j,1,n) cin>>a[i][j];
        sinh(n,1);
        cout<<"Case"<<' '<<z<<":"<<' '<<re<<endl;
    }
}

