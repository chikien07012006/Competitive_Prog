#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[5][5005];
int main()
{
    ios_base::sync_with_stdio(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        string a,b;
        cin >> a >> b;
        for(ll i=1;i<=3;i++)
        {
            for(ll j=0;j<=b.size();j++)dp[i][j]=0;
        }
        a = " " + a;b = " " + b;ll n = a.size()-1,m = b.size()-1;
        for (int i=1; i<a.size(); i++)
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
        cout<<dp[2][m]<<endl;
    }
}
