#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
int main()
{
    freopen("TBC1237.inp","r",stdin);
    freopen("TBC1237.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    string n; cin>>n; ll t=0,d=1,fl=0;
    For(i,0,n.size()-1)
    {
        if(fl==1)
        {
            d=d*10;
        }
        if(n[i]!='.')
        {
            t=t*10+n[i]-48;
        }
        if(n[i]=='.')fl=1;
    }
    cout<<d/__gcd(t,d);
}


