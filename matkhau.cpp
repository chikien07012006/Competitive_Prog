#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
 //   freopen("MATKHAU.INP","r",stdin);
   // freopen("MATKHAU.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll t=0;
    string n; getline(cin,n);
    For(i,0,n.size()-1)
    {
        if(n[i]<='9'&&n[i]>='0'&&n[i]%2==0)
        {
            t+=(n[i]-48);
        }
    }
    cout<<t<<n.size();
}
