#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t=0,t1=0;
    cin>>n; long long a[n];
    if(n%2==1)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)
            {
                t=t+a[i];
            }
        }
        cout<<t; return 0;
    }
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
                if(i%2==0) t=t+a[i];
                if(i%2==1) t1=t1+a[i];
        }
        cout<<max(t,t1); return 0;
    }
}
