#include<bits/stdc++.h>
using namespace std;

long long n, m, res, min_h, dtich;
long long a[1005][1005], d[1005][1005];
long long A[1005], L[1005], R[1005];


void xaydungmang_trai(long long n)
{
	stack<long long> s;
	s.push(0);
	A[0] = -1;
	for (int i=1; i<=n; i++)
	{
		while (A[s.top()] >= A[i]) s.pop();
		L[i] = s.top();
		s.push(i);
	}
}

void xaydungmang_phai(long long n)
{
	reverse(A+1, A+1+n);
	xaydungmang_trai(n);
	reverse(A+1, A+1+n);
	reverse(L+1, L+1+n);
	for (int i=1; i<=n; i++) R[i] = n-L[i]+1;
}

void solve(long long n)
{
	xaydungmang_phai(n);
	xaydungmang_trai(n);

	A[0] = -1;
	A[n+1] = -1;
	for (int i=1; i<=n; i++)
	{
		long long h = A[i];
		long long dau, cuoi;
		dau = L[i] + 1;
		cuoi = R[i] - 1;
		res = max(res, h*(cuoi-dau+1));
	}
}

int main()
{
    freopen("rect9.inp","r",stdin);
    freopen("rect9.out","w",stdout);
	ios_base::sync_with_stdio(0);

	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> a[i][j];


	for (int j=1; j<=m; j++)
	{
		for (int i=1; i<=n; i++)
		{
			if (a[i][j] != 9)
				d[i][j] = 0;
			else
				d[i][j] = d[i-1][j] + 1;
		}
	}

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
			A[j] = d[i][j];
		solve(m);
	}

	cout << res << endl;
}
