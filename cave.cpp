#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,fl=0; cin>>n>>k;
    For(i,1,k)
    {
        if(n%i!=(i-1)){fl=1;break;}
    }
    if(fl==0) cout<<"Yes";
    else cout<<"No";
}

