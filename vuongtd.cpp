#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
ll d[105];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0; cin>>n>>k;
    ll x;
    For(i,1,k) cin>>x,d[x]=1;
    if(n<=100&&k<=100)
    {
        For(i,1,n)
        {
            For(j,i,n)
            {
                if(d[j]==d[i])re++;
                else break;
            }
        }
    }
    cout<<re;
}




