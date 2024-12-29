#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    For(i,1,n)
    {
        For(j,1,n-i) cout<<" ";
        For(j,n-i,n) cout<<'*';
        cout<<endl;
    }
}
