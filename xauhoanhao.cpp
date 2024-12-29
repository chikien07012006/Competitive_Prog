#include<iostream>
using namespace std;
typedef long long ll;
ll f[125];
int main()
{
    ios_base::sync_with_stdio(0);
    ll a;cin>>a;string n;cin>>n;
    for(int i=0;i<a;i++)
    {
        f[n[i]]++;
    }
    ll re=0;
    for(int i=65;i<=122;i++)
    {
        re=re+(f[i]*(f[i]-1))/2;
    }
    cout<<re;
}
