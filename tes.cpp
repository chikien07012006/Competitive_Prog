#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct ok {
	ll giatri;
	ll vitri;
};
signed main()
{
	ios_base::sync_with_stdio(0);
	ll n,x; cin>>n>>x; ok a[n+5];
	For(i,1,n)
	{
		cin>>a[i].giatri;
		a[i].vitri=i;
	}
	For(i,1,n)
	{
		cout<<a[i].giatri<<' ';
	}
}
