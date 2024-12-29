#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct oke{ll vitri;ll giatri;};
bool sx(oke truoc, oke sau)
{
    return truoc.giatri<sau.giatri;
}
int main()
{
    //freopen("KTHNUM.OUT","w",stdout);
    //freopen("KTHNUM.INP","r",stdin);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,T; cin>>n>>T; oke a[n+5];
    For(i,1,n)
    {
        cin>>a[i].giatri;
        a[i].vitri=i;
    }
    sort(a+1,a+1+n,sx);
    while(T--)
    {
        ll i,j,k; cin>>i>>j>>k;
        For(h,1,n)
        {
            if(a[h].vitri<=j&&a[h].vitri>=i)k--;
            if(k==0)
            {
                cout<<a[h].giatri<<endl;
            }
        }
    }
}


