#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,m,n,max=1;
    cin>>a>>b;
    n=a;
    m=b;
    if(b%a==0)
    {
        cout<<1<<"/"<<b/a;
        return 0;
    }
    if(a<10)
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0&&b%i==0)
            {
             if(max<i)
             {
                 max=i;
             }
            }
        }
        cout<<a/max<<"/"<<b/max;
        return 0;
    }
    while(a!=b)
    {
        if(a<b)
        {
            b=b-a;
        }
        if(a>b){a=a-b;}
    }
    cout<<n/a<<"/"<<m/a;
     return 0;
}
