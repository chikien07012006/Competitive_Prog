#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll nt[3000005];
void sang()
{
	For(i,2,3000000)
	{
		if(nt[i]==0)
		{
			for(ll j=i*i;j<=3000000;j=j+i) nt[j]=1;
		}
	}
}
bool ktr(ll x)
{
	ll t=0;
	while(x>0)
	{
		t=t+x%10;
		x=x/10;
	}
	if(t%5==0) return 1;
	else return 0;
}
signed main()
{
	ios_base::sync_with_stdio(0);
	sang();
	ll l,r,res=0; cin>>l>>r;
	For(i,l,r)
	{
		if(nt[i]==0) 
		{
			if(ktr(i)==1)
			{
				res++;
			}
		}
	}
	cout<<res;
}