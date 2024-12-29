#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string tong(string a,string b)
{
    string kq;
    long long si;long nho=0;
    if(a.size()>b.size()) si=a.size();
    else si=b.size();
    while(a.size()<si) a='0'+a;
    while(b.size()<si) b='0'+b;
    for(int i=0;i<si;i++) kq=kq+'0';
    for(int i=si-1;i>=0;i--)
    {
        long tam=(a[i]-48)+(b[i]-48)+nho;
        nho=0;
        if(tam>9)
        {
            tam=tam-10;
            nho++;
        }
        kq[i]=tam+48;
    }
    if(nho==1)
    {
        kq='1'+kq;
    }
    return kq;
}
string cd(ll n)
{
    string h;
    while(n>0)
    {
        h=char(n%10+48)+h;
        n=n/10;
    }
    return h;
}
void ok(ll n)
{
    ll fl=0;
    if(n==1||n==2)cout<<1<<endl;
    ll t=1,t1=1,t2=0,vt;
    string h,h1,h2;
    for(ll i=3;i<=n;i++)
    {
        if(t+t1<=LONG_LONG_MAX)
        {t2=t+t1;t=t1;t1=t2;}
        else
        {
            fl=1;
            h=cd(t);
            h1=cd(t1);vt=i;break;
        }
    }
    if(fl==0)
    cout<<t2<<endl;
    else
    {
        for(ll i=vt;i<=n;i++)
        {
            h2=tong(h,h1);
            h=h1;
            h1=h2;
        }
        cout<<h2<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;
    while(cin>>n)
    {
        ok(n);
    }
}
