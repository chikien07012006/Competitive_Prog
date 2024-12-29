#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	int a,b;
	cin>>a>>b>>n;
	if(n%2 == 0)
	{
		ll res;
		res = b*(n/2);
		cout<<res;
		return 0;
	}
	if(n%2 == 1)
	{
		ll res,pos = n+1;
		n = n/2 + 1;
		if(n%2 == 1)
		{
			res = b*(pos/2)-1;
			cout<<res;
			return 0;
		}
		if(n%2 == 0)
		{
			res = b*(pos/2)-2;
			cout<<res;
			return 0;
		}
	}
}