#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    freopen("CHUYENDUONG.inp","r",stdin);
    freopen("CHUYENDUONG.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=0,j=1; cin>>n; ll a[n+5],b[n+5];
    stack<ll>c;
    For(i,1,n)
    {
        cin>>a[i];
        b[i]=i;
    }
    c.push(0);
    For(i,1,n)
    {
        if(c.top()==a[i])
        {
            re++; c.pop(); continue;
        }
        ll fl=0;
        while(1)
        {
            if(b[j]==a[i])
            {
               re++; fl=1; j++;
                break;
            }
            if(j>n)
            {
                break;
            }
            c.push(b[j]); j++; re++;
        }
        if(fl==0)
        {
            cout<<0;return 0;
        }
    }
    cout<<re;
}





