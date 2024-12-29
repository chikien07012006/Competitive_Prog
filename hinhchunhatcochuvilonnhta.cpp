    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int a[30][30],res=0,dp[30][30];
    ll get(int xA,int yA,int xB,int yB)
    {
        return dp[xB][yB]-dp[xB][yA-1]-dp[xA-1][yB]+dp[xA-1][yA-1];
    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,m;string s;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
         cin>>s;
         for(int j=1;j<=m;j++)
         {
             a[i][j]=(s[j-1]-48);
         }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j];
            }
        }
        for(int xA=1;xA<=n;xA++)
        {
            for(int xB=xA;xB<=n;xB++)
            {
                for(int yA=1;yA<=m;yA++)
                {
                    for(int yB=yA;yB<=m;yB++)
                    {
                        if(get(xA,yA,xB,yB)==0)res=max(res,2*(xB-xA+1+yB-yA+1));
                    }
                }
            }
        }
        cout<<res;
    }
