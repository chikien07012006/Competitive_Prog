#include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;

     string a, b;
    int n, m,dp[10][10002];
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin >> a >> b;

        a = " " + a;b = " " + b;n = a.size()-1;m = b.size()-1;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
            {
                if (a[i] == b[j])
                {
                    dp[2][j]=dp[1][j-1]+1;
                }
                else
                {
                    dp[2][j]=max(dp[2][j-1],dp[1][j]);
                }
            }
            for (int j=1; j<=m; j++) dp[1][j]=dp[2][j];
        }
        cout<<dp[2][m];
        return 0;
    }
