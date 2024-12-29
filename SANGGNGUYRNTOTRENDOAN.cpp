#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sangTrenDoan(ll L,ll R)
{
    vector<bool>check(R-L+1,0);
    ll re=0;
    for(ll i=2;i*i<=R;i++)
    {
        for(ll j=max(((L+i-1)/i)*i,i*i);j<=R;j=j+i)
        {
            check[j-L]=1;
        }
    }
    if(L<=1)
    check[1-L] = 1;
    for(ll i=L;i<=R;i++)
    {
        if(check[i-L]==0)
        {
            re++;
        }
    }
    return re;
}
int main()
{
    ll T; cin>>T;
    while(T--)
    {
        ll L,R; cin>>L>>R;
        cout<<sangTrenDoan(L,R)<<endl;
    }
}
