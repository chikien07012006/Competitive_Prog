#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    ll b[n+5],k=1;
    For(j,1,n-1)
    {
        b[k]=a[j]; d[b[k]]++; k++;
        ll fl=0;
        For(i,1,n)
        {
            if(d[a[i]]==0)
            {
                fl=1; break;
            }
        }
        if(fl==0)
        {
            re=max(re,k-1);
        }
    }
    For(j,1,n) d[a[j]]=0;
    For(i,2,n)
    {
        ll b[n+5],k=1;
        For(j,i,n)
    {
        b[k]=a[j]; d[b[k]]++; k++;
        ll fl=0;
        For(h,1,n)
        {
            if(d[a[h]]==0)
            {
                fl=1; break;
            }
        }
        if(fl==0)
        {
            re=max(re,k-1);
        }
    }
    For(j,1,n) d[a[j]]=0;
    }
    if(re==0) cout<<-1;
    else
    cout<<re;
}
