#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    ll T=1;
    while(T--)
    {
    ll x,y,z,res=1e18; cin>>x>>y>>z;
    For(i,1,1e4)
    {
        for(ll j=i;j<=1e4;j=j+i)
        {
            for(ll k=j;k<=1e4;k=k+j)
            {
                if(k%j==0&&j%i==0)
                {
                    ll t=abs(x-i)+abs(y-j)+abs(z-k);
                    res=min(res,t);
                }
            }
        }
    }
    cout<<res<<"\n";
    }
    return 0;
}
