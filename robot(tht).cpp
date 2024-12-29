#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    string s; cin>>s;
    ll tam=0;
    For(i,0,s.size()-1)
    {
        if(s[i]=='R')tam++;
        else tam--;
    }
    if(tam==0) cout<<n;
    if(tam>0)
    {
        For(i,n.size()-tam,n.size()-1)
        {
            cout<<n[i];
        }
        For(i,0,n.size()-tam-1)
        {
            cout<<n[i];
        }
        return 0;
    }
    For(i,abs(tam),n.size()-1)
    {
        cout<<n[i];
    }
    For(i,0,abs(tam)-1) cout<<n[i];
}
