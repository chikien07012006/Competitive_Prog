#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    string s,t; cin>>s>>t;
    ll de=0; if(s==t) de++;
    if(s.size()==1){cout<<de; return 0;}
    if(s.size()==2)
    {
        if(s[0]==t[0])de++;
        if(s[0]==t[1])de++;
        if(s[1]==t[1])de++;
        if(s[1]==t[0])de++;
        cout<<de;
    }
}

