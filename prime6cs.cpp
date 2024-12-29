#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
using namespace std;
int ktsnt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return(0);
        }
    }
    return(1);
}
bool ktcs(int x)
{
    int scc,t=0,t1=0,d=0;
    while(x!=0)
    {
        scc=x%10;
        t=t+scc;
        d++;
        if(d==3)
        {
            t1=t;
            t=0;
        }
        x=x/10;
    }
    if(t1==t)
    {
        return 1;
    }
    return 0;
}
int main()
{
    long d=0;
   for(int i=104113;i<=998989;i++)
    {
        if(i%2!=0)
        {
         if(ktcs(i)== 1 )
        {
            if(ktsnt(i)==1)
            {
                cout<<i<<' ';
                d++;
            }
        }
        }
    }
 cout<<endl<<d;
}
