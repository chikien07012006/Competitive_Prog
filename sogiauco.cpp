#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll uoc[1000006];
void sang()
{
    For(i,1,1000000)
    {
        for(ll j=i;j<=1000000;j=j+i)uoc[j]+=i;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll n,ma=0,ct=0; cin>>n;
    For(i,1,n)
    {
        if(ma<uoc[i])
        {
            ma=uoc[i];
            ct=i;
        }
    }
    cout<<ct;
}


