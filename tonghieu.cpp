#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string tong(string a,string b)
{ string kq;
    long long si;long nho=0;
    if(a.size()>b.size()) si=a.size();
    else si=b.size();
    while(a.size()<si) a='0'+a;
    while(b.size()<si) b='0'+b;
    for(int i=0;i<si;i++) kq=kq+'0';
    for(int i=si-1;i>=0;i--)
    {
        long tam=(a[i]-48)+(b[i]-48)+nho;nho=0;
        if(tam>9){tam=tam-10;nho++;}kq[i]=tam+48;
    }
    if(nho==1)kq='1'+kq;
    return kq;
}
void hieu(string a,string b)
{ string kq;
    long nho=0;
    int si=a.size();
    while(b.size()<si) b='0'+b;
    for(int i=0;i<si;i++) kq=kq+'0';
    for(int i=si-1;i>=0;i--)
    {
        long tam=(a[i]-48)-(b[i]-48)-nho;nho=0;
        if(tam<0){tam=tam+10;nho++;}
        kq[i]=char(tam+48);
    }
    cout<< kq;
}
void chia(string a)
{string kq;ll t=0;ll k=0;
    for(int i=0;i<a.size();i++)
    {if(i==0){if(a[i]=='1'){t=10;continue;}
            else{
                kq=kq+char((a[i]-48)/2+48);
                if((a[i]-48)%2==0)t=0;
                else t=10;}}
        else{t=t+(a[i]-48);
            kq=kq+char(t/2+48);
            if(t%2==0)t=0;
            else t=10;}
    }
    cout<<kq;
}
int main()
{
    ios_base::sync_with_stdio();
    string n,n1;
    cin>>n>>n1;
    if('1'<=n[0]<='9'&&'1'<=n[1]<='9')
    {
        cout<<'-'<<chia(tong(n,n1));
        cout<<
    }
}
