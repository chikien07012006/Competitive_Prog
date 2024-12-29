#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
ll d[200005];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,q,re=0; vao n>>q; ll a[n+5];
    For(i,1,n) vao a[i];
    while(q--)
    {
        ll l,r; vao l>>r;
        For(i,l,r)d[i]++;
    }
    sort(a+1,a+1+n,greater<ll>());
    sort(d+1,d+1+200000,greater<ll>());
    ll i=1,j=1;
    while(d[j]!=0)
    {
        re=re+a[i]*d[j];
        i++;j++;
    }
    cout<<re;
}

