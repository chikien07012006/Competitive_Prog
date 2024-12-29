#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[5005][5005];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t; cin>>n>>t;
    ll k,r,x,y;
    while(t--)
    {
        ll d=1;
        cin>>k>>r>>x>>y;
        if(k==1)
        {
            For(i,x,(y+x)/2)
            {
                a[r][i]=a[r][i]+d;
                a[r][y-d+1]=a[r][y-d+1]+d;
                d++;
            }
            if(y%2==1)a[r][(y+x)/2+1]=a[r][(y+x)/2+1]+d;
        }
        if(k==2)
        {
            For(i,x,(y+x)/2)
            {
                a[i][r]=a[i][r]+d;
                a[y-d+1][r]=a[y-d+1][r]+d;
                d++;
            }
            if(y%2==1)a[(y+x)/2+1][r]=a[(y+x)/2+1][r]+d;
        }
    }
    ll q; cin>>q;
    while(q--)
    {
        ll u,v; cin>>u>>v; cout<<a[u][v]<<endl;
    }
}
