    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    const long long t=2*10^5;
    ll a[t],b[t];
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,i,res=0;
        cin>>n; for(ll i=1;i<=n;i++) cin>>a[i];
        for(i=1;i<=n;i++){cin>>b[i];a[i]=a[i]-b[i];}
        sort(a+1,a+1+n);
        for(ll i=1;i<=n;i++)cout<<a[i]<<' ';
        cout<<endl;
        for(ll i=n;i>=1;i--)
        {
            if(a[i]<=0){cout<<res;return 0;}
            else
            for(ll j=i-1;j>=1;j--)
            {
                if(a[i]+a[j]>0){if(j==1){res=res+i-j;}}
                if(a[i]+a[j]<=0&&a[i]+a[j+1]>0){res=res+i-j-1;break;}
            }
        }
        cout<<res;
    }

