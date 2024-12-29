#include<bits/stdc++.h>
using namespace std;
long long n;
void hnp()
{
    long long a=n; string h;
    while(a>0)
    {
        h=h+char((a%2)+48);
        a=a/2;
    }
    cout<<h<<endl;
}
void hbp()
{
    long long a=n; string h;
    while(a>0)
    {
        h=h+char((a%8)+48);
        a=a/8;
    }
    cout<<h<<endl;
}
void htlp()
{
    long long a=n,flag=0; string h;
    while(a>0)
    {
        flag=0;
        if(a%16==10){h=h+'A';flag=1;}
        if(a%16==11){h=h+'B';flag=1;}
        if(a%16==12){h=h+'C';flag=1;}
        if(a%16==13){h=h+'D';flag=1;}
        if(a%16==14){h=h+'E';flag=1;}
        if(a%16==15){h=h+'F';flag=1;}
        if(flag==0) h=h+char((a%16)+48);
        a=a/16;
    }
    cout<<h<<endl;
}
int main()
{
    cin>>n;
    hnp();
    hbp();
    htlp();
}
