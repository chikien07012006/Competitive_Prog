    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,x,t=1e18; cin>>n>>x; ll a[n+5];
        For(i,1,n) cin>>a[i];
        For(i,1,n) if(x%a[i]==0){cout<<x;return 0;}
        For(i,1,n)
        {
        ll h=a[i];
        while(a[i]<x)
        {
            a[i]=a[i]+h;
        }
        t=min(t,a[i]);
        }
        cout<<t;
    }



