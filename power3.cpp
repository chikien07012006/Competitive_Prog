#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {ll i=1,fl=0;
    ll n; cin>>n;
    for(ll i=0;i<=n;i++)
    {
        if(i*i*i>n)break;
        if(i*i*i==n){fl=1;cout<<"YES"<<endl;break;}
    }
    if(fl==0)cout<<"NO"<<endl;
    }
}
