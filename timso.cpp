#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
long long x,n,tich,tong;
int main()
{
    ios_base::sync_with_stdio(0);
    ll x,n;
    cin>>x>>n;
    For(i,1,n-1)
    {
        ll t=0,t1=1;
        while(x>0)
        {
            if(x%10!=0)
            {
                t1=t1*(x%10);
                t=t+x%10;
            }
            x=x/10;
        }
        x=t+t1;
    }
    cout<<x;
}

