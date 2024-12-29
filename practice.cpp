#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,flag=0,d=0;
    cin>>n>>k;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<=k)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        while(flag==1)
        {
            flag=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]<=k&&a[i]!=-1)
                {
                    d++;
                    k=k+b[i];
                    a[i]=-1;
                    flag=1;
                }
            }
        }
        cout<<d; return 0;
    }
    else
    {
        cout<<0; return 0;
    }
}
