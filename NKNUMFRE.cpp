#include<bits/stdc++.h>
using namespace std;
bool ucln(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    if(a==1)
    {
        return true;
    }
    return false;
}
bool stt(int a)
{
    int b=0,c=a;
    while(a!=0)
    {
        b=b*10+(a%10);
        a=a/10;
    }
    if(ucln(c,b)==1) return true;
    return false;
}
int main()
{
    long long a,b,d=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(stt(i)==true)
            d++;
    }
    cout<<d;
}
