#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
    ll x,y,a,b; cin>>x>>y>>a>>b;
    if(x==0&&y==0)
    {
        cout<<0<<endl; continue;
    }
    if(x==0)
    {
        cout<<y*a<<endl; continue;
    }
    if(y==0)
    {
        cout<<x*a<<endl; continue;
    }
    if(a*2>b)
    {
        cout<<min(x,y)*b+(max(x,y)-min(x,y))*a<<endl; continue;
    }
    if(a*2<=b)
    {
        cout<<a*x+a*y<<endl; continue;
    }
    }
}

