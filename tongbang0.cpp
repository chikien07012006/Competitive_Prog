    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    ll f[100005];
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll n,d=1,re=0;cin>>n; ll a[n+5];f[0]=0;
        for(ll i=1;i<=n;i++){cin>>a[i];f[i]=f[i-1]+a[i];}
        sort(f,f+1+n);
        for(ll i=0;i<n;i++)
        {cout<<f[i]<<endl;
         if(f[i]==f[i+1])d++;
         else{re=re+(d*(d-1)/2);d=1;}
        }
        re=re+(d*(d-1)/2);
        cout<<re;
    }
