#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll okla(string n)
{
    string t,t1; ll d=0;
    For(i,0,n.size()-1)
    {
        t=t+n[i];
        t1=t1+n[n.size()-i-1];
        if(t==t1)d++;
        else break;
    }
    return d;
}
int main()
{
    freopen("DAYK.INP","r",stdin);
    freopen("DAYK.OUT","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll T; cin>>T;
    string n,t; cin>>n;
    For(i,0,n.size()-1)
    {
        t=t+n[i]; cout<<okla(t)<<' ';
    }
}
