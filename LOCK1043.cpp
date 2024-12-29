#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
string xuli1(string n)
{
    For(i,0,n.size()-1)
    {
        if(n[i]=='9')n[i]='0';
        else n[i]=char(int(n[i])+1);
    }
    return n;
}
string xuli2(string n)
{
    char t=n[n.size()-1];
    for(ll i=n.size()-1;i>=1;i--)
    {
        n[i]=n[i-1];
    }
    n[0]=t;
    return n;
}
int main()
{
    freopen("LOCK1043.inp","r",stdin);
    freopen("LOCK1043.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll T; string n,m; vo T>>n;
    ll X; vo X>>m;
    For(i,0,m.size()-1)
    {
        if(m[i]=='1')n=xuli1(n);
        else n=xuli2(n);
    }
    ra n;
}

