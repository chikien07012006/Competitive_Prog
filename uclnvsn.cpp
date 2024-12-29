#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,p; cin>>n>>p;
    For(i,1,n)
    {
        if(__gcd(n,i)==p)re++;
    }
    cout<<re;
}




