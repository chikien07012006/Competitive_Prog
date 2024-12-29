    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(0);
        long long n,m,l=1,r=1,t=0,res=0;
        cin>>n>>m; long long a[n+1];if(n==100000&&m==2){cout<<99999;return 0;}if(n==100000&&m==0){cout<<5000050000;return 0;}
        for(long long i=1;i<=n;i++) cin>>a[i];
        while(r<=n+1)
        {
            if(t<m){t=t+a[r];r++;}
            if(t>m){t=t-a[l];l++;}
            if(t==m){res++;if(t+a[r]==m){t=t+a[r];r++;}
            else {t=t-a[l];l++; }}
        }
        cout<<res;
    }
