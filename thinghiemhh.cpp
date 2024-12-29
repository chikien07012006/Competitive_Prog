#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
vector<ll>b;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
        res=res+a[1]*a[1]*a[1]*a[1]*(n-1);
        For(i,2,n)
        {
            res=res+(n-i)*a[i]*a[i]*a[i]*a[i];
            res=res-a[i]*a[i]*a[i]*a[i]*(i-1);
        }
        cout<<res;return 0;
}


