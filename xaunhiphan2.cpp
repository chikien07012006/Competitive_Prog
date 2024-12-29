#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll mang[800],u=1;
ll doi(string n)
{
    ll re=0;
    For(i,0,n.size()-1)
    {
        re=re*2+n[i]-48;
    }
    return re;
}
string doi1(ll n)
{
    string t,t1;
    while(n>0)
    {
        t=t+char(n%2+48);
        n=n/2;
    }
    for(ll i=t.size()-1;i>=0;i--)
    {
        t1=t1+t[i];
    }
    return t1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    string t=doi1(n);
    For(i,0,t.size()-1)
    {
        string h;
        For(j,i,t.size()-1)
        {
            h=h+t[j];
            mang[u]=doi(h);
            u++;
        }
    }
    u--;
    sort(mang+1,mang+1+u);
    ll re=0;
    For(i,1,u)
    {
        if(mang[i]!=mang[i+1])re=re+mang[i];
    }
    cout<<re;
}



