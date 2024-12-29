#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<-b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    if(n>=1&&n<=10) {cout<<n*5000;return 0;}
    if(n>=11&&n<=20) {cout<<n*4800;return 0;}
    if(n>=21) {cout<<n*4500;return 0;}
}