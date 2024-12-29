#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100],k,n,dp[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i-a[j]<0) continue;
            if(dp[i-a[j]]==0) dp[i]=1;
        }
    }
    if(dp[k]==1) cout<<"First";
    else cout<<"Second";
}
