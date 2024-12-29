#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>dem1;
bool check(ll tam, ll ak)
{
    if(tam==ak)
    {
        if(dem1[tam]==1)
        return 0;
    }
    return 1;
}
int main()
{
    freopen("PAIR.INP","r",stdin);
    freopen("PAIR.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,d,re=0; cin>>n>>d; ll a[n+5];
    if(d==0)
    {
        For(i,1,n) cin>>a[i];
        sort(a+1,a+1+n);
        For(i,1,n-1)
        {
            for(ll j=n;j>i;j--)
            {
                ll ht=a[i]+a[j],co=0;
                For(k,i,j) dem1[a[k]]++;
                For(k,i,j)
                {
                    dem1[a[k]]--;
                    if(dem1[ht-a[k]]>0)
                    {
                        co++;
                        dem1[ht-a[k]]--;
                    }
                }
                re=max(re,co);
                 For(k,i,j) dem1[a[k]]=0;
            }
        }
    }
    if(d==1)
    {
        For(i,1,n) cin>>a[i];
        sort(a+1,a+1+n);
        For(i,1,n-1)
        {
            for(ll j=n;j>i;j--)
            {
                ll ht=a[i]+a[j],co=0;
                For(k,i,j) dem1[a[k]]++;
                For(k,i,j)
                {
                    ll tam=ht-a[k];
                    if(dem1[tam+1]>0&&check(tam+1,a[k])==1&&dem1[a[k]]>0)
                    {
                    dem1[a[k]]--;
                        co++;
                        dem1[tam+1]--;
                        continue;
                    }
                    if(dem1[tam]>0&&check(tam,a[k])==1&&dem1[a[k]]>0)
                    {
                    dem1[a[k]]--;
                        co++;
                        dem1[tam]--;
                        continue;
                    }
                    if(dem1[tam-1]>0&&check(tam-1,a[k])==1&&dem1[a[k]]>0)
                    {
                    dem1[a[k]]--;
                        co++;
                        dem1[tam-1]--;
                        continue;
                    }
                }
                re=max(re,co);
                 For(k,1,n) dem1[a[k]]=0;

            }
        }
    }
    cout<<re;
}
