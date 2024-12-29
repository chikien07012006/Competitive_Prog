#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T; while(T--){
    ll n,re=0; cin>>n;
    For(i,1,n-1)
    {
        For(j,i+1,n)
        {
            re=re+__gcd(i,j);
        }
    }
    cout<<re<<endl;
    }
}





