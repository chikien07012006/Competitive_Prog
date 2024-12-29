#include<iostream>
using namespace std;
typedef long long ll;
ll a[2000];
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;a[0]=1;
    for(ll i=1;i<n.size();i++)
    {
        ll t=0,fl=0;
        for(ll j=0;j<=i-1;j++)
        {
            if(n[j]<=n[i]){t=max(t,a[j]);fl=1;}
        }
        if(fl==1)a[i]=t+1;else a[i]=1;
    }ll t1=0;
    for(ll i=0;i<n.size();i++){t1=max(t1,a[i]);}cout<<t1;
}
