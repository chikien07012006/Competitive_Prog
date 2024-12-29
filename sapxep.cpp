#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a;
ll ma[50005];
ll ma1;
long long check()
{
    For(i,0,a.size()-2)
    {
        if(ma[i+1]>a[i]){return i;}
    }
    return -1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    long long n,i=0,re=0;cin>>n; ll h=n;h--;
    For(i,1,n) {ll x; cin>>x;a.push_back(x);}
    if(n>5000)
    {
        for(long long i=a.size()-2;i>=0;i--)
        {
            if(a[i]!=a[i+1]){re=re+h;}
            h--;
        }
        cout<<re;return 0;
    }
    for(ll i=a.size()-1;i>=0;i--)
    {
        ma[i]=max(ma[i+1],a[i]);
    }
    while(check()!=-1)
    {
        a.push_back(a[check()]);
        a.erase(a.begin()+check());
        re++;
        for(ll i=a.size()-1;i>=0;i--)
        {
            if(a[i]>=a[a.size()-1])break;
            ma[i]=max(ma[i+1],a[i]);
        }
    }
    cout<<re;
}

