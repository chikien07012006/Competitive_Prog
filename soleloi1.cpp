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
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n;cin>>n;string x;
        for(ll i=1;i<=n;i++)
        {
            cin>>x;ll fl=0;string y,z;
            if(x[x.size()-1]=='0'){cout<<"NO"<<endl;continue;}
            for(ll i=x.size()-1;i>=0;i--)
            {
                y=y+x[i];
            }
            z=tong(x,y);
           // cout<<z;return 0;
            for(ll i=0;i<z.size();i++)
            {
                if(z[i]%2==0){fl=1;break;}
            }
            if(fl==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
