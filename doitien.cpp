    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    ll n;
    ll a[100005];
    vector<ll>b;
    bool ktra()
    {
        for(ll i=0;i<b.size();i++)
        {
            if(b[i]<b.size()-i) return false;
        }
        return true;
    }
    signed main()
    {
       // freopen("tile.INP","r",stdin);
       // freopen("tile.OUT","w",stdout);
        ios_base::sync_with_stdio(0);
        cin>>n;
        For(i,1,n) cin>>a[i];
        sort(a+1,a+1+n, greater<ll>());
        for(ll i=1;i<=n;i++)
        {
            b.push_back(a[i]);
            if(ktra()==false)
            {
                cout<<b.size(); return 0;
            }
        }
        cout<<n;
    }


