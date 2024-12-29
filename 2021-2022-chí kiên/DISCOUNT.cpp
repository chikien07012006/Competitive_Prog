#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll check[1000005];
ll soluong[1000005];
signed main()
{
    freopen("DISCOUNT.inp","r",stdin);
    freopen("DISCOUNT.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,ma=0,kaka=0; cin>>n; ll a[n+100];
    For(i,1,n) cin>>a[i],kaka=max(kaka,a[i]),check[a[i]]++;
    if(n<1e4)
    {
        For(i,1,n)
        {
            For(j,i+1,n)
            {
                ma=max(ma,__gcd(a[i],a[j]));
            }
        }
        cout<<ma;
        return 0;
    }
    For(i,2,kaka)
    {
        ll tam=i;
        while(tam<=kaka)
        {
            if(check[tam]!=0)
            {
                soluong[i]+=check[tam];
                if(soluong[i]>=2)
                {
                    ma=max(ma,i);
                    break;
                }
            }
            tam+=i;
        }
    }
    cout<<ma;
    return 0;

}
