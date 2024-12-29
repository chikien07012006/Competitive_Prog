#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
 //   freopen("TenGoi.inp","r",stdin);
   // freopen("TenGoi.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,re=0,dem=0; cin>>n;
    vector<ll>a[n+5];
    For(i,1,n)
    {
        string x; cin>>x;
        a[i].push_back(-1);
        For(j,0,x.size()-1)
        {
         if(x[j]=='R'||x[j]=='A'||x[j]=='W')
         {
             a[i].push_back(j);
         }
        }
        a[i].push_back(x.size());
    }
    For(i,1,n)
    {
        For(j,1,a[i].size()-1)
        {
            if(a[i][j]-a[i][j-1]==re)
            {
                dem++;
            }
           if(a[i][j]-a[i][j-1]>re)
            {
                re=a[i][j]-a[i][j-1];
                dem=1;
            }
        }
    }
    cout<<re-1<<' '<<dem;
}
