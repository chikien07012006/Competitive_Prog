#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    stack<ll>a;
    For(i,1,10)
    {
        ll n; cin>>n;a.push(n);
    }
    For(i,1,a.size()-1)cout<<1;
}


