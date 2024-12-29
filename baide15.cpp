#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
string t,t1;
bool kt(ll n)
{
    if(n<2) return 0;
    For(i,2,sqrt(n))
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    For(i,2,sqrt(n))
    {
        if(n%i==0)
        {
            if(kt(i)==1)t=t+char(i);
            if(kt(n/i)==1)t=t+char(n/i);
        }
    }
    For(i,2,sqrt(m))
    {
        if(m%i==0)
        {
            if(kt(i)==1)t1=t1+char(i);
            if(kt(m/i)==1)t1=t1+char(m/i);
        }
    }
    cout<<t<<endl<<t1;
    //sort(t.begin(),t.end()); sort(t1.begin(),t1.end());
    //if(t==t1) cout<<"YES";
    //else cout<<"NO";
}
