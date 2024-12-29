#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[123];
string bodau(string n)
{
    string s;
    For(i,0,n.size()-1)
    {
        if(n[i]!=' ')
        {
            For(j,i,n.size()-1)s=s+n[j];
            return s;
        }
    }
}
string bocuoi(string n)
{
    string s;
    for(ll i=n.size()-1;i>=0;i--)
    {
        if(n[i]!=' ')
        {
            For(j,0,i)s=s+n[j];
            return s;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n,s;
    getline(cin,n);
    n=(bodau(n));
    n=bocuoi(n);
    ll re1=0;
    For(i,0,n.size()-1)
    {
        if(n[i]!=' ')
        {
        f[n[i]]++;
        if(f[n[i]]==1)re1++;
        }
    }
    s=s+char(n[0]-32);
    For(i,1,n.size()-1)
    {
        if(n[i]!=' ')
        {
            if(n[i-1]==' '){s=s+' ';s=s+char(n[i]-32);}
            else s=s+n[i];
        }
    }
    cout<<s<<endl;
    ll re=0; string t;
    For(i,0,s.size()-1)
    {
        if(n[i]!=' ')
        {
            ll d=0;string t1;
            For(j,i,s.size()-1)
            {
                if(n[j]!=' ') {d++;t1=t1+s[j];}
                else break;
            }
            if(re<d)
            {
                re=d;
                t=t1;
            }
        }
    }
    cout<<t<<endl;
    cout<<re1;
}
