#include<bits/stdc++.h>
#include<math.h>
bool ktsnt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
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
    return true;
    return false;
}
using namespace std;
int main()
{
    long t=0;
    for(long i = 1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                for(int q=0;q<=9;q++)
                {
                    for(int l=0;l<=9;l++)
                    {
                        for(int y=0;y<=9;i++)
                        {
                            t=i*100000+j*10000+k*1000+q*100+l*10+y;
                            if(t>=999999)
                            {return 0;}
                            if(ktcs(t)==true)
                            {
                                if(ktsnt(t)==true)
                                {
                                    cout<<t<<' ';
                                }
                            }
                            t=0;
                        }
                    }
                }
            }
        }
    }
}

