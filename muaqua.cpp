#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll h[1000005],l[1000005],r[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll m,n,res=0,j=1;
    cin>>n>>m;
    while(m--)
    {
        ll x;
        For(i,1,n) {
            cin>>x;
            if(x==1) h[i]++;
            else h[i]=0;
        }
        For(i,1,n)
        {
            j=i-1;
            while(h[i]>=h[j])j--;
            l[i]=j;
        }
        For(i,1,n)res=max(res,h[i]*(r[i]-l[i]-1));
    }
    cout<<res;
}
