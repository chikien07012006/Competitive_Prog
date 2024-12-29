#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<"\n";
        FOR(i,1,n/2) cout<<2<<' ';
    }
    else
    {
        cout<<n/2<<"\n";
        FOR(i,1,n/2-1)cout<<2<<' ';
        cout<<3;
    }
}
