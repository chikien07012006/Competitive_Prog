#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll t; cin>>t;
    for(ll k=1;k<=t;k++)
    {
        ll n,d=0; cin>>n;
        for(ll i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                ll h=n/i;
                if(h!=i)
                {
                    if(h%2==0)d++;
                    if(i%2==0)d++;
                }
                else if(i%2==0)d++;
            }
        }
        cout<<d<<endl;
    }
}

