    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    ll f[1000005];
    void sang()
    {
        f[1]=1;
        For(i,2,1000005)
        {
            if(f[i]==0)
            {
                for(ll j=i*i;j<=1000005;j=j+i) f[j]=1;
            }
        }
    }
    signed main()
    {
        //freopen("DEMUOC.INP","r",stdin);
        //freopen("DEMUOC.OUT","w",stdout);
        ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
        sang();
        ll n,x; cin>>n;
        For(i,1,n)
        {
            cin>>x;
            ll t=sqrt(x);
            if(t*t!=x){cout<<"NO"<<"\n"; continue;}
            if(f[t]==1){cout<<"NO"<<"\n"; continue;}
            cout<<"YES"<<"\n";
        }
    }
