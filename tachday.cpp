#include<bits/stdc++.h>
using namespace std;
#define int long long
#define For(i,a,b) for(long long i=a;i<=b;i++)
int n;
int a[1000005];
int sum = 0,fl=0;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin >> n;
	for (int i=1; i<=n;i++) cin >> a[i];
	For(i,1,n)if(a[i]!=0)fl=1;
	if(fl==0){cout<<0<<' '<<1;return 0;}
	int luui=-1;
	int luuj=-1;
	for (int i =1; i<=n; i++) sum+=a[i];

	if (sum%3!=0)
	{
		cout << -1;
		return 0;
	}

	int tong = 0;
	for (int i=1; i<=n; i++)
	{
		tong = tong + a[i];
		if (tong == sum/3)
		{
			luui = i;
			break;
		}
		if (tong > sum/3)
		{
			cout << -1;
			return 0;
		}
	}
	tong = 0;
	for (int i=n; i>=1; i--)
	{
		tong = tong + a[i];
		if (tong == sum/3)
		{
			luuj = i - 1;
		}
	}

	if (luuj == -1)
	{
		cout << -1;
		return 0;
	}
	cout << luui-1 << " " << luuj - 1<<"\n";
}




