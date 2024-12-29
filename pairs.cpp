#include<bits/stdc++.h>
using namespace std;
string tong(string a, string b)
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

string xl(string a,string b)
{
    string s;
    s=a+b;
    return s;
}
int main()http://lequydon.ntucoder.net/Problem/List
{
    ios_base::sync_with_stdio(0);
    long long n; string s,tam;
    cin>>n; string a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]!=a[j])
           {
               tam=xl(a[i],a[j]);
             s=tong(s,tam)%(1e9+7);
          //   cout<<s<<endl;
           }
        }
    }
    cout<<s%(1e9+7); return 0;
}
