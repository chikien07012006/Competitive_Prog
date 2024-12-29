#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll q[100],a[25],f[25],res=0;
void sang()
{
    for(ll i=2;i<=sqrt(50);i++)
    {
        if(q[i]==0)
        for(ll j=i*i;j<=50;j=j+i) q[j]=1;
    }
}
void sinh(ll i, ll n)
{
    for(ll j=2;j<=n;j++)
    {
        if(f[j]==0)
        {
            a[i]=j;f[j]=1;
            if(q[a[i]+a[i-1]]==0)
            {
                if(i==n)
                {
                    if(q[a[n]+a[1]]==0) res++;
                }
                else sinh(i+1,n);
            }
            f[j]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n; cin>>n;
   // if(n==9) {cout<<770144;return 0;}
    a[1]=1;
    sang();
    sinh(2,2*n);
    cout<<res;
}








