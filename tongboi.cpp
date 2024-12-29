#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0; cin>>n>>k;
    while(n%k!=0)n--;
    ll ssh=(n-k)/k+1;
    cout<<(n+k)*ssh/2;
}



