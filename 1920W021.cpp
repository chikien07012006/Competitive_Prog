#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,d=0,t;
    cin>>n;d=n+n-1;
    for(long long i=2;i<=n;i++)
    {
        for(long long j=2;j<=1000000000;j++)
        {
             t=i*j;
            if(i<=n&&t<=n)d++;
            if(t>n)
            {
                if(j==2){cout<<d;return 0;}
                else break;
            }
        }
    }
}
