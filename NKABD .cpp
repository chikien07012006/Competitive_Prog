#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int main()
{
    long long l,r,d=0;
    cin>>l>>r;
    for(long long i=1;i<=r;i++)
    {
        for(long long j=i*2;j<=r;j=j+i)
        {
            a[j]=a[j]+i;
        }
    }
    for(long long i=l;i<=r;i++)
    {
        if(a[i]>i) d++;
    }
    cout<<d;
}
