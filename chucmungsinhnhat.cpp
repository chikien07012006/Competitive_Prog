#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<char,ll>dem;
map<char,ll>check;
ll res=0;
signed main()
{
	ios_base::sync_with_stdio(0);
	string a="Chuc mung sinh nhat LQDOJ";
	For(i,0,a.size()-1)
	{
		dem[a[i]]++;
	}
	string n; getline(cin,n);
	For(i,0,n.size()-1)
	{
		dem[n[i]]--;
	}
	For(i,0,a.size()-1)
	{
		if(dem[a[i]]>0&&check[a[i]]==0)
		{
			//cout<<a[i]<<' '<<dem[a[i]]<<endl;
			check[a[i]]=1;
			res+=dem[a[i]];
		}
	}
	cout<<res;
}