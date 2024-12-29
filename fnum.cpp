#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int spp(int x)
{
    long d=0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            if(i==x/i)
            {
                d=d+2;
            }
            else
            {
                d++;
            }
        }
    }
    return d;
}
int main()
{
    long long n;
    cin>>n;
    cout<<spp(6);
    for(long long i=1;i<=10000000000000000000;i++)
    {
        if(spp(i)==n)
        {
            cout<<i; return 0;
        }
    }
}
