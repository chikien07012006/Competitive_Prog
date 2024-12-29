#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,d=0,t=0;
    cin>>n>>m;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=m)
        {
            d++;
            t=a[i];
            for(int j=i+1;j<n;j++)
            {
                t=t+a[j];
                if(t==m)
                {
                    d++;
                    break;
                }
                if(t<m)
                {
                    d++;
                }
                if(t>m)
                {
                    break;
                }
            }
            t=0;
        }
        if(a[i]>m)
        {
            continue;
        }
    }
    cout<<d;
}
