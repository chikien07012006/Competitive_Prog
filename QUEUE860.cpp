#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[1000000],l=1,r=0;
ll lay()
{
    return a[l];
}
void them(ll n)
{
    r++;
    a[r]=n;
}
void xoadau()
{
    l++;
}
int main()
{
    freopen("QUEUE860.inp","r",stdin);
    freopen("QUEUE860.out","w",stdout);
    ios_base::sync_with_stdio(0);
    For(i,0,1000000)a[i]=-1;
    l=1;r=0;
    ll n; cin>>n;
    For(i,1,n)
    {
        ll b,x; cin>>b;
        if(b==0)
        {
            cin>>x;
            them(x);
            For(j,l,r)cout<<a[j]<<' ';
            cout<<endl;
        }
        if(b==1)
        {
            if(lay()==-1){cout<<-1;return 0;}
            For(j,l,r) cout<<a[j]<<' ';
            cout<<endl;
            xoadau();
        }
    }
}



