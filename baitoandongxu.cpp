int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];

    dp[0][0] = 1;
    for (int j=1; j<=n; j++) dp[0][j] = 0;
    for (int i=1; i<=n; i++) dp[i][0] = dp[i-1][0] * (1 - a[i]);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++) dp[i][j] = dp[i-1][j-1]*a[i] + dp[i-1][j]*(1-a[i]);
    }

    double res = 0;
    for (int j=n/2 + 1; j<=n; j++) res += dp[n][j];

    cout << fixed << setprecision(9) << res;
}
