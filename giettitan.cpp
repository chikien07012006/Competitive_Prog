#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;cin>>t;
    while(t--)
    {ll n,m;cin>>n>>m;
    if(n%32==0)
    {if(m>n/32)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
    else
    {
      if(m>n/32+1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    }
}
