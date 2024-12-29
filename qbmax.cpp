#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a[1000][1000],b[1000][1000];
    long long n,m,res=LONG_LONG_MIN;cin>>n>>m;
    for(ll i=1;i<=n;i++)for(ll j=1;j<=m;j++)cin>>a[i][j];
        for(ll i=1;i<=n;i++)b[i][1]=a[i][1];
        for(ll i=2;i<=m;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(j==1)
                b[j][i]=max(b[j][i-1]+a[j][i],b[j+1][i-1]+a[j][i]);
                if(j==n)
                b[j][i]=max(b[j][i-1]+a[j][i],b[j-1][i-1]+a[j][i]);
                if(j>1&&j<n){
                    b[j][i]=max(b[j][i-1]+a[j][i],max(b[j+1][i-1]+a[j][i],b[j-1][i-1]+a[j][i]));
                }
            }
        }
        for(ll i=1;i<=n;i++){res=max(res,b[i][m]);}
        cout<<res;
}
