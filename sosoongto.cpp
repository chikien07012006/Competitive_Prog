#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool snt(ll n)
{
    if(n<2)return 0;
    For(i,2,sqrt(n)) if(n%i==0) return 0;
    return 1;
}
string check(ll n)
{
    ll t=0,t1=n;
    while(t1>0)
    {
        t=t+t1%10;
        t1=t1/10;
    }
    if(snt(n)==1&&snt(t)==1) return "So n la so song to";
    else return "So n khong phai la so song to";
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    cout<<check(n)<<"\n";
    For(i,2,n)
    {
        if(check(i)=="So n la so song to") cout<<i<<' ';
    }
    cout<<endl;
    for(ll i=3;i<=n-2;i=i+2)
    {
        if(snt(i)==1&&snt(i+2)==1) cout<<'('<<i<<','<<i+2<<')'<<' ';
    }
}
