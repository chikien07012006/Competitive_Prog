#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,d=0,i,t,t2;
    cin>>n>>m;d=m;t=sqrt(n);t2=n;
    for(i=2;i<=t;i++)
    {
        if(t2%i==0)
        {
            while(t2%i==0)t2=t2/i;
            d=d-(d/i);
        }
    }
    if(t2>1)d=d-(d/t2);
    cout<<d;
}
//4027392
