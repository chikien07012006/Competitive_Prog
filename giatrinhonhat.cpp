#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i,a,b) for(ll i=a;i<=b;i++)
deque<long long>dq;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,vt=0;
    cin>>n>>k;ll a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
   /* For(i,1,k-1)
    {
        while(!dq.empty()&&a[dq.back()]>=a[i])dq.pop_back();
        dq.push_back(i);
     //   while(!dq.empty && dq.front()<i-k+1)dq.pop_front();
    }*/
    for(ll i=1;i<=n;i++)
    {
      while(!dq.empty()&&a[dq.back()]>=a[i])
        dq.pop_back();
      while(!dq.empty()&&dq.front()<i-k+1) dq.pop_front();
       dq.push_back(i);
      if(i-k>=0) cout<<a[dq.front()]<<endl;
    }
}
