    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    signed main()
    {
        ios_base::sync_with_stdio(0);
        ll q; cin>>q;
        while(q--)
        {
            ll x,y,n; cin>>x>>y>>n;
            if(n%2==1)x=2*x;
            cout<<max(x,y)/min(x,y)<<endl;
        }
    }