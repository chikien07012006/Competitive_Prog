#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,t=0,k=1; cin>>n;
    while(t<n)
    {
        t=t+k;
        k++;
    }
    k--;
    cout<<n-(t-k);
}
