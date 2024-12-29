#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dem[150];
signed main()
{
    ios_base::sync_with_stdio(0);
    string s; cin>>s;
    For(i,0,s.size()-1) dem[s[i]]++;
    For(i,'a','z')if(dem[i]%2==1){cout<<"No"; return 0;}
    cout<<"Yes";
}
