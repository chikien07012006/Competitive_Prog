#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,m,ans=1e18;
ll a[300005];
bool ktr(ll x)
{
	ll tam=n,fl=0;
	For(i,1,m)
	{
		ll t=a[i]/x;
		if(x*t==a[i]) tam=tam-t;
		else tam=tam-t-1;
		if(tam<0) 
		{
			fl=1;
			break;
		}
	}
	if(fl==1) return false;
	else return true;
}
signed main()
{
	ios_base::sync_with_stdio(0);
	ll l=1,r=-1e18;
	cin>>n>>m;
	For(i,1,m) cin>>a[i],r=max(r,a[i]);
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(ktr(mid)==1)
		{
			ans=min(ans,mid);
			r=mid-1;
		}
		if(ktr(mid)==0)
		{
			l=mid+1;
		}
	}
	cout<<ans;
}