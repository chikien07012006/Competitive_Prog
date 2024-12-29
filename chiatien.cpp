#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        ll j=n-i;
        if(j%2==0)
       {
         if(i<=j/2-1) re=re+(j/2-1-i);
            else break;
       }
        if(j%2==1)
       {
            if(i<=j/2) re=re+(j/2-i);
            else break;
       }
    }

    cout<<re;
}
