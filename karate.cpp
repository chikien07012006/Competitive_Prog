#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
stack<ll>d;
stack<ll>d1;
ll f[1000005],f1[1000005];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n;vao n; ll a[n+5],b[n+5];
    For(i,1,n)
    {
        vao a[i]>>b[i];
        if(b[i]==0){f[i]=f[i-1]+1; f1[i]=f1[i-1];}
        if(b[i]==1){f1[i]=f1[i-1]+1; f[i]=f[i-1];}
    }
    d.push(0); a[0]=1e18;
    d1.push(0);a[0]=1e18;
    For(i,1,n)
    {
        if(b[i]==0)
        {
            while(a[d.top()]<=a[i]) d.pop();
            if(a[d.top()]==1e18)ra f[i]-1<<' ';
            else ra f[i]-f[d.top()]-1<<' ';
            d.push(i);
        }
        if(b[i]==1)
        {
            while(a[d1.top()]<=a[i]) d1.pop();
            if(a[d1.top()]==1e18)ra f1[i]-1<<' ';
            else ra f1[i]-f1[d1.top()]-1<<' ';
            d1.push(i);
        }
    }
}
