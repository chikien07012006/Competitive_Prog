    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    ll d[100005];
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,m,re=0; cin>>n>>m;
        For(i,1,m)
        {
            ll a,b; cin>>a>>b;
            if(d[a]==0&&d[b]==0)re++;
            d[a]++;d[b]++;
        }
        cout<<re;
    }
