#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[30005],f[30005];
void cong(){
    For(i,1,30000)
    {
        f[i]=f[i-1]+d[i];
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    ll a[n+5];
    For(i,1,n) cin>>a[i],d[a[i]]++;
    cong();
    For(i,1,10)
    {
        cout<<f[i]<<' ';
    }
    cout<<endl;
    For(i,1,n)
    {
        For(j,i+1,n)
        {
            ll t1=max(a[i],a[j])-min(a[i],a[j]);
            ll t2=a[i]+a[j];
            cout<<a[i]<<' '<<a[j]<<' ';
            cout<<re<<' ';
            re=re+f[t2]-f[t1-1]-d[max(a[i],a[j])];
            if(t1<=min(a[i],a[j]))re=re-d[min(a[i],a[j])];
            cout<<re<<endl;
        }
    }
    cout<<re;

}




