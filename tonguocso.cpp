#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[1000005];
ll f[1000005];
ll n,m;
void ham()
{
    For(i,1,n)
    {
        ll t=a[i]+1;
        for(ll j=2;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                t=j+1; break;
            }
        }
        f[i]=f[i-1]+t;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n) cin>>a[i];
    ham();
    while(m--)
    {
        ll l,r; cin>>l>>r;
        cout<<f[r]-f[l-1]<<"\n";
    }
}
