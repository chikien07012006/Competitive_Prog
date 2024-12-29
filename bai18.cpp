#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=0,ma=-99999999,d=0,dmax=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            s=s+a[i];
            d++;
        }
        if(a[i]>0||i==n-1)
        {
            if(s>ma)
            {
                ma=s;
                dmax=d;
            }
            s=0;
            d=0;
        }
    }
    cout<<dmax;
}
