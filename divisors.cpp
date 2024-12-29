#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
ll d[100];
void ptich(ll n)
{
    For(i,2,sqrt(n))
    {
        while(n%i==0)
        {
            d[i]++;n=n/i;
        }
    }
    if(n>1)d[n]++;
}
int main()
{
    freopen("DIVISORS.inp","r",stdin);
    freopen("DIVISORS.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=1; vo n;
    For(i,2,n)
    {
        ptich(i);
    }
    For(i,1,100)
    {
        re=re*(d[i]+1);
    }
    cout<<re-1;
}

