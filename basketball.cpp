#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005],b[200005],d1,n,m,vt1,vt2,d2,res=-1e18;
vector<ll>v;
ll ct(ll d)
{
    ll l=1,r=m,check=0;
    ll mid=(l+r)/2;
    while (l<=r)
    {
        mid = (l+r)/2;
        if (b[mid]<=d ){
            check = mid;
            l = mid + 1;
        }
        else r = mid-1;
    }
    return check;
}
ll cp(ll d)
{
    ll l=1,r=n,check=0;
    ll mid = (l+r)/2;
    while ( l<=r )
    {
        mid = (l+r)/2;
        if ( a[mid]<=d ){
            check = mid;
            l = mid + 1;
        }
        else r = mid-1;
    }
    return check;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    v.push_back(0);
    for (int i=1;i<=n;i++ )
    {
        cin >> a[i] ;
        v.push_back(a[i]);
    }
    cin >> m;
    for (int i=1;i<=m;i++ )
    {
        cin >> b[i] ;
        v.push_back(b[i]);
    }
    sort (a+1,a+n+1);
    sort (b+1,b+m+1);
    a[0]=a[1]-1;
    b[0]=b[1]-1;
    v.push_back(a[0]);
    v.push_back(b[0]);
    for ( auto d : v )
    {
        ll i=cp(d);
        d1=i*2+(n-i)*3;
        ll j=ct(d);
        d2=j*2+(m-j)*3;
        if (d1-d2>res ||( d1-d2==res && d1 > vt1 ))
        {
            vt1 = d1;
            vt2 = d2;
            res = d1-d2;
        }
    }
    cout << vt1 <<":"<< vt2;
}
