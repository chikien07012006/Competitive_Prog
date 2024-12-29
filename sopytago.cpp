#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
long long t(string n)
{long long s=0;
    for(long long i=0;i<n.size();i++)s=s*10+(n[i]-48);
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n;ll res=0;
    cin>>n;
    for(ll i=0;i<n.size()-2;i++)
    {
        for(ll j=i+1;j<n.size()-1;j++)
    {
     string a=n.substr(0,i+1);
     string b=n.substr(i+1,j-i);
     string c=n.substr(j+1,n.size()-j);
     if(a[0]!='0'&&b[0]!='0'&&c[0]!='0'&&a.size()<=10&&b.size()<=10&&c.size()<=10)
     {
         if(t(a)+t(b)>t(c)&&t(b)+t(c)>t(a)&&t(a)+t(c)>t(b))
         {if(t(a)*t(a)==t(b)*t(b)+t(c)*t(c))res=max(res,t(a));
         if(t(b)*t(b)==t(a)*t(a)+t(c)*t(c))res=max(res,t(b));
         if(t(c)*t(c)==t(b)*t(b)+t(a)*t(a))res=max(res,t(c));}
     }
    }
    }
    cout<<res;
}
