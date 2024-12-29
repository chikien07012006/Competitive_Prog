#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct ok{ll cd,cr,cc;};
bool ss(ok a, ok b)
{
    if(a.cd==b.cd) return a.cr<b.cr;
    return a.cd<b.cd;
}
ll sltd[5005],cctd[5005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res1=0,res2=0; cin>>n; ok a[n+5];
    For(i,1,n) cin>>a[i].cd>>a[i].cr>>a[i].cc;
    //cout<<endl;
    sort(a+1,a+1+n,ss);
    //For(i,1,n) cout<<a[i].cd<<' '<<a[i].cr<<' '<<a[i].cc<<endl;
    //cout<<endl;
    For(i,1,n)
    {
        ll t=0,t1=0;
        for(ll j=i-1;j>=1;j--)
        {
            if(a[i].cd==a[j].cd) continue;
            if(a[i].cr>a[j].cr) {t=max(t,sltd[j]);t1=max(t1,cctd[j]);}
        }
        sltd[i]=t+1; cctd[i]=t1+a[i].cc;
        res1=max(res1,sltd[i]);
        res2=max(res2,cctd[i]);
    }
    cout<<res1<<' '<<res2;
}
