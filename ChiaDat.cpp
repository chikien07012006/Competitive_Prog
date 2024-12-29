#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[505][505],d[505][505];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=1e18; cin>>n;
    For(i,1,n)
    {
        For(j,1,n)
        {
            cin>>a[i][j];
            d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1];
            if(a[i][j]==1)
            {
                d[i][j]=d[i][j]+1;
            }
        }
    }
    For(i,1,n-1)
    {
        For(j,1,n-1)
        {
            ll dat1=d[i][j];
            ll dat2=d[i][n]-d[i][j];
            ll dat3=d[n][j]-d[i][j];
            ll dat4=d[n][n]-d[i][n]-d[n][j]+d[i][j];
            ll ma=max(max(dat1,dat2),max(dat3,dat4));
            ll mi=min(min(dat1,dat2),min(dat3,dat4));
            res=min(res,ma-mi);
        }
    }
    cout<<res;
}
