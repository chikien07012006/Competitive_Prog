#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
bool kt(float n)
{
    ll t=int(n);
    if(t!=n) return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    For(i,1,n-1)
    {
        float t=sqrt(n*n-i*i);
        if(kt(n)==1)
        {
            re=max(re,t*i);
        }
    }
    cout<<re;
}
