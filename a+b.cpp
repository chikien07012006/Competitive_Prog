#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,kq;
    cin>>a>>b;
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
    cout<<kq;
}
