#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll d[123],t=0;
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    ll m; cin>>m;
    if(m>n.size())
    {
        cout<<"impossible"; return 0;
    }
    for(ll i=0;i<n.size();i++)d[n[i]]++;
    for(ll i=97;i<=122;i++)
    {
        if(d[i]>0)
        {t++;}
    }
    if(m<t)cout<<0;
    else cout<<m-t;
}
