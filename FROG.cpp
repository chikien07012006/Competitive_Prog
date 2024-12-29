#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[1005][1005],trace;
int main()
{
  //  freopen("FROG.inp","r",stdin);
 //   freopen("FROG.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll m,n,k; cin>>m>>n>>k; ll a[m+5][n+5];
    For(i,1,m)
    {
        For(j,1,n) cin>>a[i][j];
    }
    For(i,1,m)
    {
        For(j,1,n)
        {
            ll y=0;
            For(u,j-k,j+k)
            {
                if(u<1||u>n) continue;
                y=max(f[i-1][u],y);
            }
            f[i][j]=y+a[i][j];
        }
    }
    ll re=0;
    For(i,1,n) re=max(re,f[m][i]); cout<<re;
}



