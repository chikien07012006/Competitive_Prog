#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool ktsnt(ll n)
{
    if(n<2)return 0;
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(ll i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    if(ktsnt(n)==1)cout<<"YES";
    else cout<<"NO";
}




