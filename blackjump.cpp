#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main()
{
    long long n,m,l=0,r=1,s=0,d=1;
    cin>>n>>m; for(long long i=1;i<=n;i++)cin>>a[i];
    while(r<=n)
    {
        if(s+a[r]<=m)
        {
            s=s+a[r]; r++; d++;
        }
        else
        {
            s=s-a[l];if(s-a[r]<=n)d++;l++;
        }
    }
    cout<<d;
}
