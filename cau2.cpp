#include<bits/stdc++.h>
using namespace std;
//#define ll long long
typedef long long ll;
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;
     cin>>n;
     For(i,0,sqrt(n.size())-1)
     {
         ll t=0;
         for(ll j=i;j<=n.size()-1;j=j+sqrt(n.size()))
         {
             t=t+ll(n[j]);
         }
         re=max(re,t);
     }
     For(i,0,sqrt(n.size())-1)
     {
         ll t=0;
         for(ll j=i;j<=n.size()-1;j=j+sqrt(n.size()))
         {
             t=t+ll(n[j]);
         }
         if(t==re)
         {
             for(ll j=i;j<=n.size()-1;j=j+sqrt(n.size()))
            {
             cout<<n[j]<<' ';
            }
            cout<<endl;
            break;
         }
     }
     cout<<re;
}
