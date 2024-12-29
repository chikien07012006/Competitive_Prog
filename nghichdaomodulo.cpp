#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dem[500],x,y;
vector<ll>k;
const ll M=1e9+7;
ll giaiThua(int n)
{
    ll giai_thua = 1;
    for (ll i = 1; i <= n; i++)
        giai_thua =(giai_thua*(i%M))%M;
    return giai_thua;
}
void extendedEuclid(int A, int B) {
    if (B == 0) {
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
ll tohop(ll n, ll k)
{
    ll kq=1;
    For(i,n-k+1,n)
    {
        kq=(kq*(i%M))%M;
    }
    extendedEuclid(giaiThua(k),M);
    ll tmp=(x%M+M)%M;
    return ((kq%M)*(tmp%M))%M;
}
signed main()
{
    freopen("CNTPALIN.inp","r",stdin);
    freopen("CNTPALIN.out","w",stdout);
    ios_base::sync_with_stdio(0);
    string a; cin>>a;
    For(i,0,a.size()-1)
    {
        dem[a[i]]++;
    }
    ll d=0,tong=0,res=1;;
    For(i,'A','Z')
    {
        if(dem[i]!=0)
        {
            k.push_back(dem[i]);tong+=dem[i];
        }
        if(dem[i]%2==1)d++;
        if(d==2)
        {
            cout<<0; return 0;
        }
    }
    if(d==1)tong=(tong-1)/2;
    else tong=tong/2;
    For(i,0,k.size()-1)
    {
        if(k[i]%2==1) k[i]=(k[i]-1)/2;
        else k[i]=k[i]/2;
        res=(res*tohop(tong,k[i])%M)%M;
        tong=tong-k[i];
    }
    cout<<res;
}

