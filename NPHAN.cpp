#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    string n; cin>>n;
    ll t=0,re;
    t=n[0]-48;
    For(i,1,n.size()-1)
    {
        re=t*2+n[i]-48;
        t=re;
    }
    cout<<re%3;
}


