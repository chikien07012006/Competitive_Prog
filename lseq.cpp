#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0,t=1,k,res=0;cin>>n;
     for(ll i=1;i<=n;i++){cin>>k;if(k!=0){a[t]=k;t++;}if(k==0)d++;}
     t--;
     sort(a+1,a+1+t);ll i=1;
      for(ll i=1;i<t;i++)
     {
         ll tam=1,y=d;
         if(a[i+1]-a[i]==1)tam++;
         else
         {
             if(a[i+1]-a[i]>=y&&y>0)
             {

             }
         }
     }
}
