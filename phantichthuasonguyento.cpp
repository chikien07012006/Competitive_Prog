#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
void pt(ll n)
{
    ll fl=0,re=0,n1=n;
    For(i,2,sqrt(n))
    {
        while(n%i==0)
        {
            if(fl==0){fl=1;cout<<i;}
            else
            {
                cout<<'*'<<i;
            }
            n=n/i;
        }
    }
    if(n!=1&&fl==1)
    {
        cout<<'*'<<n;
    }
    if(n!=1&&fl==0) cout<<n;
    cout<<endl;
    For(i,1,sqrt(n1))
    {
        if(n1%i==0)
        {
            re++;
            ll t=n1/i;
            if(t!=i)re++;
        }
    }
    cout<<re;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n; pt(n);
}

