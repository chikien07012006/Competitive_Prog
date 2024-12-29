    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(0);
        long long n,m,res=LONG_LONG_MAX;
        cin>>n;long long a[n];
        for(long long i=1;i<=n;i++) cin>>a[i];
        cin>>m; long long l=1,r=1,t=0;
        while(r<=n)
        {
            if(t<m)
            {
                t=t+a[r];r++;
            }
            if(t>m)
            {
                t=t-a[l];l++;
            }
            if(t==m)
            {
                res=min(res,r-l);
                t=t-a[l];l++;
            }
        }
        if(res==LONG_LONG_MAX) cout<<-1;
        else
        cout<<res;
    }
