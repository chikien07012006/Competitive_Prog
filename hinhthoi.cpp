#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ll n; cin>>n;
    For(i,1,n)
    {
        ll t=2*i-1;
        For(j,1,(n*2-1-t)/2)
        {
            cout<<' ';
        }
        For(j,1,t) cout<<'*';
        cout<<endl;
    }
    for(ll i=n-1;i>=1;i--)
    {
                ll t=2*i-1;
        For(j,1,(n*2-1-t)/2)
        {
            cout<<' ';
        }
        For(j,1,t) cout<<'*';
        cout<<endl;
    }
}


