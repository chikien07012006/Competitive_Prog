#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
ll uocso[1000005];
ll preUoc[1000005];
void sang()
{
    For(i,1,1000000)
    {
        for(ll j=i;j<=1000000;j=j+i)
            {
                uocso[j]++;
            }
    }
    For(i,1,1000000)
    {
        preUoc[i]=preUoc[i-1]+uocso[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll T; cin>>T;
    while(T--)
    {
        ll a,b; cin>>a>>b;
        cout<<preUoc[b]-preUoc[a-1]<<endl;
    }
}
