#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,t=a-1;string n; cin>>a>>n;
    for(ll i=0;i<a;i++)
    {
        if(n[i]>n[i+1]){t=i;break;}
    }
    for(ll i=0;i<a;i++)
    {
        if(i==t);
        else cout<<n[i];
    }
}
