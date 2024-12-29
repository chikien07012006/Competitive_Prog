#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[105];
struct pa{ll first;ll second;ll third;};
pa d2[105],d5[105];
ll check[104];
ll luu[6][105];
bool ss(pa trc,pa sau)
{
    if(trc.first==sau.first) return trc.third>sau.third;
    return trc.first>sau.first;
}
void de(ll i)
{
    d2[i].second=i;
    d5[i].second=i;
    ll dem2=0,dem5=0;
    while(a[i]%2==0)
    {
        dem2++;
        a[i]=a[i]/2;
    }
    while(a[i]%5==0)
    {
        dem5++;
        a[i]=a[i]/5;
    }
    d2[i].first=dem2;
    d5[i].first=dem5;
    d2[i].third=dem5;
    d5[i].third=dem2;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k; cin>>n>>k; ;
    For(i,1,n)
    {
        cin>>a[i];
        de(i);
    }

    sort(d2+1,d2+1+n,ss);
    sort(d5+1,d5+1+n,ss);

    ll i2=1,i5=1,t2=0,t5=0,cnt=0;
    while(cnt<k&&i2<=n&&i5<=n)
    {
        while(t2<=t5&&cnt<k&&i2<=n&&i5<=n)
        {
            ll vitri=d2[i2].second;
            if(check[vitri]==0)
            {
                check[vitri]=1;
                t2+=d2[i2].first;
                t5+=d2[i2].third;
                cnt++;
            }
            i2++;
        }
        while(t5<=t2&&cnt<k&&i2<=n&&i5<=n)
        {
            ll vitri=d5[i5].second;
            if(check[vitri]==0)
            {
                check[vitri]=1;
                t5+=d5[i5].first;
                t2+=d5[i5].third;
                cnt++;
            }
            i5++;
        }
    }
    cout<<min(t2,t5);
}

