    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,re=0;cin>>n;ll a[n+5];
        for(ll i=1;i<=n;i++){cin>>a[i];re=re+a[i];}
        sort(a+1,a+1+n);
        for(ll i=1;i<=n/2;i++)
        {
            re=re+a[n+1-i]-a[i];
        }
        cout<<re;
    }

