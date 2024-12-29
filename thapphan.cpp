#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
   // freopen("THAPPHAN.INP","r",stdin);
   // freopen("THAPPHAN.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    double n; cin>>n;
    double t1=n-long(n);
    double t2=long(n+1)-n;
    if(t1<=t2)
    {
        cout<<long(n);
    }
    else
    {
        cout<<long(n+1);
    }
}
