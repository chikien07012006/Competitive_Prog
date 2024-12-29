#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,s=0,re=100000000000,s1=0,ct=0;
    cin>>n; long long a[n];
    for(int i=1;i<=n;i++){cin>>a[i];s=s+a[i];}
    for(int i=1;i<n;i++)
    {
     s1=s1+a[i];
     if(abs(s-2*s1)<re)
     {
         re=abs(s-2*s1);
         ct=i;
     }
    }
    cout<<ct;
}
