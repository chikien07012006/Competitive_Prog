#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>xuli;
vector<ll>dem;
ll check[5000005];
void sang(ll n)
{
	For(i,2,n)
	{
		if(check[i]==0)
		{
			xuli.push_back(i);
			for(ll j=i*i;j<=n;j+=i)
			{
				check[j]=1;
			}
		}
	}
}
ll tong(ll n)
{
	ll t=0;
	while(n>0)
	{
		t+=n%10;
		n=n/10;
	}
	return t;
}
signed main()
{
	//freopen("DOCAONT.INP","r",stdin);
	//freopen("DOCAONT.OUT","w",stdout);
	ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k; 
	sang(n);
	For(i,0,xuli.size()-1)
	{
		if(tong(xuli[i])==k)
		{
			dem.push_back(xuli[i]);
		}
	}
	For(i,0,dem.size()-1) cout<<dem[i]<<endl;
	cout<<dem.size();
}