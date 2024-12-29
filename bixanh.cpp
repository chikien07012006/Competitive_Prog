#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b)
{
    long long t;
    while(a>0)
    {
        t=a;
        a=b%a;
        b=t;
    }
    return b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b,c;
    cin>>a>>b>>c;
    if(c%a==0){cout<<c/a;return 0;}
    if(c%ucln(a,b)!=0){cout<<-1;return 0;}
    long long d=1;
    while((c+(b*d))%a!=0)d++;
    cout<<d+((c+d*b)/a);
}
