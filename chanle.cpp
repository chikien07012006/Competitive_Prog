#include <bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
ll chan[1000005],le[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        if(a[i]%2==0){chan[i]=chan[i-1]+1;le[i]=le[i-1];}
        else
        {
            le[i]=le[i-1]+1; chan[i]=chan[i-1];
        }
    }
    For(i,1,n)
    {
        if(chan[n]-chan[i]==chan[i-1] || le[n]-le[i]==le[i-1]) {cout<<i-1;return 0;}
    }
    cout<<-1;
    return 0;
}

