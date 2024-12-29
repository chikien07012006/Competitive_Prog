#include<bits/stdc++.h>
using namespace std;
string h2x(string a, string b)
{
    long long hct=0,tama=0,tamb=0; string xct="abcd";
    for(int i=0;i<4;i++)
    {
        tama=tama*10+(a[i]-48);
    }
    for(int i=0;i<4;i++)
    {
        tamb=tamb*10+(b[i]-48);
    }
    hct=tama-tamb;
    for(int i=3;i>=0;i--)
    {
        xct[i]=hct%10+48;
        hct=hct/10;
    }
    return xct;
}
int main()
{
 string x,xct; long n=1;
 cin>>x;
 while(x!="6174")
 {
     xct=x;
     string xa=x,xb=x;
     sort(xa.begin(), xa.end());
     sort(xb.begin(),xb.end(),greater<char>());
     x=h2x(xb,xa);
     n++;
 }
 cout<<n<<endl<<xct;
}

