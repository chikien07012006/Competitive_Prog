#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll gt(ll d)
{
    ll re=1;
    For(i,1,d)re=re*i;
    return re;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
    ll n,re=0; cin>>n;
    if(n==1) {cout<<2<<endl; continue;}
    For(i,1,n)
    {
     if(gt(i)==n)re++;
     if(gt(i)>n)break;
    }
    cout<<re<<endl;
    }
}
