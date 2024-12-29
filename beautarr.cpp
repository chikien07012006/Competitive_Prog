#include <bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
ll d[5000005],a[5000005],t;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0,l=1,r=1; cin>>n;
    For(i,1,n)
    {
        cin>>a[i];
        d[a[i]]++;
        while(d[a[i]]>2)
        {
            d[a[l]]--;
            l++;
        }
        re=re+i-l+1;
    }
    cout<<re;
}

