#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0; cin>>n;
    a[1]=1;a[2]=5;a[3]=10;a[4]=20;a[5]=100;
    while(n>0)
    {
    for(ll i=1;i<=6;i++)
    {
        if(i==6||a[i]>n)
        {
            d++;n=n-a[i-1];break;
        }
    }
    }
    cout<<d;
}

