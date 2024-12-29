    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,q;cin>>n>>q;
        ll a[n+5];for(ll i=1;i<=n;i++)cin>>a[i];
        ll l,r,t;
        for(ll i=1;i<=q;i++)
        {
            ll ma=0;
            cin>>t>>l>>r;
            if(t==2){a[l]=r;}
            else
            {
                for(ll j=l;j<=r;j++)ma=ma+a[j];
                cout<<ma<<endl;
            }
        }
    }
