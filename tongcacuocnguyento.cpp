#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#include<math.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    ll t=n;
    For(i,2,sqrt(t))
    {
        if(n%i==0)re=re+i;
        while(n%i==0)
        {
            n=n/i;
        }
        if(n==1)break;
    }
    if(n>1)re=re+n;
    cout<<re;
}
