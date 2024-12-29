#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
ll ktr(string n)
{
    if(n=="")return 0;
    ll d=0,t=0;
    while(n[d]=='0')
    {
        d++;
    }
    For(i,d,n.size()-1)
    {
        t=t*10+n[i]-48;
    }
    return t;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n,tam=""; cin>>n;
    n=n+' ';
    For(i,0,n.size()-1)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            tam=tam+n[i];
        }
        else
        {
            re=max(re,ktr(tam));
            tam="";
        }
    }
    cout<<re;
}
