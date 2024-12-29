#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool kt(ll n)
{
    string t;
    while(n>0)
    {
        t=t+char(n%10+48);
        n=n/10;
    }
    For(i,0,t.size()/2-1)if(t[i]!=t[t.size()-i-1])return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll a,b; cin>>a>>b;
    while(kt(b)!=1)b--;
    cout<<b;
}


