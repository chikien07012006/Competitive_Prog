
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[21],f[21],d=0,g[50];
void nt()
{
    for(ll i=2;i<=40;i++)if(g[i]==0)for(ll j=i*i;j<=40;j=j+i)g[j]=1;
}
long long sinhv(ll i,ll n)
{
    for(ll j=2;j<=n;j++)
    {
        if(g[a[i-1]+j]==1)continue;
        if(f[j]==0)
       {a[1]=1;
           a[i]=j;f[j]=1;
        if(i==n)
        {//cout<<1;
            if(g[a[n]+a[1]]==0)d++;
            f[j]=0;
        }
        else {sinhv(i+1,n);f[j]=0;}
       }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    nt();
   // for(ll i=1;i<=40;i++)cout<<i<<' '<<g[i]<<endl;
    ll n;cin>>n;sinhv(2,2*n);
    cout<<d;
}
