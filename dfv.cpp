#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string dp[3000][3000];
int main()
{
    ios_base::sync_with_stdio(0);
    string a,b;cin>>a>>b;
    a=" "+a;
    b=" "+b;
    for(int i=1;i<a.size();i++)
    {
        for(int j=1;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                dp[i][j]=dp[i-1][j-1]+a[i];
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[a.size()-1][b.size()-1];
}
