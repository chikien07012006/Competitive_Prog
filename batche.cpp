#include<bits/stdc++.h>
using namespace std;
long long a[60001];
int main()
{
    long long n,l,r,ma=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        for(int i=l;i<=r-1;i++)
        {
            a[i]=1;
        }
    }
    for(int i=0;i<=60000;i++)
    {
        if(a[i]==1)
        {
            d++;
        }
        if(a[i]==0)
        {
            if(d>ma)
            {
                ma=d;
            }
            d=0;
        }
    }
    cout<<ma;
}
