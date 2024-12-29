#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct ok{ll dinh,thoigian,tien;};
vector<ok>a[5*100000+5];
ll check[5*100000+5],dd[5*100000+5];
ll tien1[5*100000+5];ok truyvet[5*100000+5];
vector<ll>b,c;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k; cin>>n>>m;
    For(i,1,m)
    {
        ll u,v,t,c; cin>>u>>v>>t>>c;
        ok tam;
        tam.dinh=v;
        tam.thoigian=t;
        tam.tien=c;
        a[u].push_back(tam);
        tam.dinh=u;
        a[v].push_back(tam);
    }
    cin>>k;
    For(i,1,n)dd[i]=1e18,tien1[i]=1e18;
    dd[1]=0;tien1[1]=0;
    For(i,1,n)
    {
        ll cantim,duongdi=1e18,ti;
        For(j,1,n)
        {
            if(dd[j]<duongdi&&check[j]==0)
            {
                duongdi=dd[j];
                cantim=j;
                ti=tien1[j];
            }
        }
        check[cantim]=1;
        for(auto x:a[cantim])
        {
            ll di=x.dinh;
            ll tg=x.thoigian;
            if(duongdi+tg==dd[di])
            {
                if(x.tien+ti<tien1[di])
                {
                    tien1[di]=x.tien+ti;
                    truyvet[di].dinh=cantim;
                    truyvet[di].tien=x.tien;
                }
            }
            if(duongdi+tg<dd[di])
            {
                dd[di]=duongdi+tg;
                tien1[di]=ti+x.tien;
                truyvet[di].dinh=cantim;
                truyvet[di].tien=x.tien;
            }
        }
    }
    ll tam=n;b.push_back(n);c.push_back(truyvet[n].tien);
    while(n!=1)
    {
        b.push_back(truyvet[n].dinh);
        c.push_back(truyvet[n].tien);
        n=truyvet[n].dinh;
    }
    ll sl=0,h=k;
    for(ll i=b.size()-1;i>=1;i--)
    {
        if(h<c[i])
        {
            h=k;
            sl++;
        }
        h=h-c[i];
    }
    cout<<sl+dd[tam]<<' ' <<h;
}
