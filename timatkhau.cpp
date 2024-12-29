#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
bool check(ll n)
{
    if(n==1) return 0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    string a; cin>>a;
    For(i,0,a.size()-1)
    {
        ll h=i;
        ll tam=0;
        if(tam==0&&a[h]=='0') continue;
        while(a[h]>='0'&&a[h]<='9')
        {
            tam=tam*10+(int(a[h])-48);
            if(tam>=100000000) break;
            if(check(tam)==1) re=max(re,tam);
            h++;
        }
    }
    cout<<re;
}
