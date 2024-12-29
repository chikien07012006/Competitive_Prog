#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll tongdau[200005];
double ans=-1e18;
signed main()
{
	//freopen("BOCBONG.INP","r",stdin);
	//freopen("BOCBONG.OUT","w",stdout);
	ios_base::sync_with_stdio(0);
	ll n,k,trai,phai; cin>>n>>k; ll a[n+5];
	For(i,1,n) cin>>a[i],tongdau[i]=tongdau[i-1]+a[i];
	For(i,k,n)
	{
		for(ll j=0;j<=n-i;j++)
		{
			ll tong=tongdau[j+i]-tongdau[j];
			double tam=double(tong)/double(i);
			ans=max(ans,tam);
		}
	}
	cout<<setprecision(3)<<fixed<<ans;
}