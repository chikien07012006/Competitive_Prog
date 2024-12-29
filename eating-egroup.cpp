#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	ll n; cin>>n; ll a[n+5],b[n+5];
	For(i,1,n) cin>>a[i],b[i]=a[i];
	ll d=0,d1=0;
	for(ll i=n-1;i>=1;i--)
	{
	    if(a[i]<a[i+1])
        {
            a[i]=a[i+1];
            d++;
        }
	}
    For(i,2,n)
    {
        if(b[i]<b[i-1])
        {
            b[i]=b[i-1];
            d1++;
        }
    }
    cout<<min(d,d1);
}



