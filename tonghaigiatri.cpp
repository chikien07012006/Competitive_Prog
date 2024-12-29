	#include <bits/stdc++.h>
	using namespace std;
	#define ll long long
	#define For(i,a,b) for(ll i=a;i<=b;i++)
	struct ok {
		ll giatri;
		ll vitri;
	};
	bool ss(ok truoc,ok sau)
	{
		return truoc.giatri<sau.giatri;
	}
	signed main()
	{
		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
		ll n,x; cin>>n>>x; ok a[n+5];
		For(i,1,n)
		{
			cin>>a[i].giatri;
			a[i].vitri=i;
		}
		sort(a+1,a+1+n,ss);
		For(i,1,n)
		{
			ll tam = x - a[i].giatri;
			if(x<tam) break;
			ll l=i+1,r=n;
			while(l<=r)
			{
				ll mid=(l+r)/2;
				if(a[mid].giatri>tam)
				{
					r=mid-1;
				}
				if(a[mid].giatri<tam)
				{
					l=mid+1;
				}
				if(a[mid].giatri==tam)
				{
					cout<<min(a[mid].vitri,a[i].vitri)<<' '<<max(a[mid].vitri,a[i].vitri);
					return 0;
				}
			}
		}
		cout<<"IMPOSSIBLE";
	}
