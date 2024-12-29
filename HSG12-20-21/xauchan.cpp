#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<char,ll>d;
signed main()
{
    ios_base::sync_with_stdio(0);
    string s; cin>>s;
    For(i,0,s.size()-1)
    {
        d[s[i]]++;
    }
    For(i,0,s.size()-1)
    {
        if(d[s[i]]%2==1)
        {
            cout<<"No"; exit(0);
        }
    }
    cout<<"Yes";
}
