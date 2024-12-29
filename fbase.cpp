    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    ll cd(ll a,ll n)
    {
        ll t=0;
        string h;
        while(a>0)
        {
            h=h+char(a%n+48);
            a=a/n;
        }
        for(ll i=h.size()-1;i>=0;i--)
        {
            t=t*10+h[i]-48;
        }
        return t;
    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll a,b,c; cin>>a>>b>>c;
        cout<<b+c;
    }

