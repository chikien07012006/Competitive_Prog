#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
void xuli(string n, ll k)
{
	string tam=n;
	while(k>9)
	{
		For(i,0,n.size()-1)
		{
			if(n[i]=='9')
			{
				tam=tam+'1';
				tam=tam+'0';
			}
			else
			{
				tam=tam+char(long(n[i])+1);
			}
		}
		n=tam;
		k=k-10;
	}
	ll res=n.size();
	For(i,0,n.size()-1)
	{
		if(long(n[i])-48+k>9)res++;
	}
	cout<<res<<endl;
}
signed main()
{
	freopen("CONG.INP","r",stdin);
	freopen("CONG.OUT","w",stdout);
	ios_base::sync_with_stdio(0);
	ll T; cin>>T;
	while(T--) 
	{
		string n; ll k;
		cin>>n>>k;
		xuli(n,k);
	}
	return 0;
}