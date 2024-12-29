#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,t,d=0,tam=0;cin>>n>>m>>t;
    if((n-m)/m+1>=t){ll q=t-d-1;cout<<q*m+m;/*for(ll i=m;i<=n;i=i+m){tam++;if(tam==t)cout<<i;}*/}
    else
    {d=d+((n-m)/m+1);
    for(ll i=1;i<=m-1;i++)
    {
        if(d+((n-i)/m+1)<t)d=d+(n-i)/m+1;
        else
        {
            ll q=t-d-1;
            cout<<q*m+i;return 0;
           // for(ll j=i;j<=n;j=j+m){d++;if(d==t){cout<<j;return 0;}}
        }
    }
    }
}
f
