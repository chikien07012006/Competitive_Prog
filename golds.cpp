#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,m,re=0;
ll a[100],b[100];
void sinh(ll i,ll n,ll s)
{
    For(j,0,1)
    {
     if(j==1)
     {
         s=s+a[i];
     }
     if(s<=m)
     {
         re++;
         if(i<n)
         {
             sinh(i+1,n,m);
         }
     }
    if(j==1)s=s-a[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n) cin>>a[i];
    sinh(1,n,0);
    cout<<re;
}





