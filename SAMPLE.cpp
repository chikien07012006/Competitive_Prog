#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k,re=0;
    cin>>n>>m>>k; string a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n-1)
    {
        For(j,i+1,n)
        {
            ll d=0;
            For(h,0,m-1)
            {
                if(a[i][h]!=a[j][h])
                {
                    d++;
                    if(d>k) break;
                }
            }

            if(d==k)
            {
                re++;
            }
        }
    }
    cout<<re;
}


