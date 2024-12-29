    #include<bits/stdc++.h>
    using namespace std;
    struct abc{
        long long x,y;
    };
    bool ss(abc truoc,abc sau)
    {
        return truoc.x+truoc.y<sau.x+sau.y;
    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        long long n,m,t=0,re,re1,t1=0;
        cin>>n>>m; abc a[n];
        for(long long i=1;i<=n;i++){cin>>a[i].x>>a[i].y;t=t+a[i].x+a[i].y;}
        sort(a+1,a+1+n,ss);
        for(long long i=n;i>=1;i--)
        {
         if(t-a[i].x/2<=m){cout<<i;return 0;}
         t=t-a[i].x-a[i].y;
        }
        cout<<0;
    }
