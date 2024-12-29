#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[100],a[150][105],f[105];
bool check1(ll i,ll j)
{
    For(k,1,9)
    {
        f[a[i][k]]++;
        if(f[a[i][k]]==2)
        {
            For(k,1,9)
            {
                f[a[i][k]]=0;
            }
            return 0;
        }
    }
    For(i,1,10)f[i]=0;
    For(k,1,9)
    {
        f[a[k][j]]++;
        if(f[a[k][j]]==2)
        {
            For(k,1,9)
            {
                f[a[k][j]]=0;
            }
            return 0;
        }
    }
    return 1;
}
void check(ll i, ll j,ll t)
{
    ll t1;
    For(i,1,9) if(d[i]==0)t1=i;
    for(ll k=i;k<=i+2;k++)
        for(ll l=j;l<=j+2;l++)
        {
           if(a[k][l]==t)
           {
               a[k][l]=t1;
               if(check1(k,l)==1)
               {
                   cout<<k<<' '<<l<<' '<<t1; return;
               }
               a[k][l]=t;
           }
        }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    For(i,1,9)
    {
         string n; cin>>n;
         For(j,0,n.size()-1)
         {
             a[i][j+1]=int(n[j]-48);
         }
    }
    for(ll i=1;i<=9;i=i+3)
    {
        for(ll j=1;j<=9;j=j+3)
        {
            ll fl=0;
            for(ll k=i;k<=i+2;k++)
            {
                for(ll l=j;l<=j+2;l++)
                {
                    d[a[k][l]]++;
                    if(d[a[k][l]]==2)fl=a[k][l];
                }
            }
            if(fl!=0)
            {
                check(i,j,fl);
                return 0;
            }
            For(m,1,10) d[m]=0;
        }
    }
}
