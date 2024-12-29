#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,dt=1;
    cin>>n;
    long long a[n],cc=n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    while(1)
    {
        if(a[dt]<=0)
        {
            dt++;
        }

        if(a[cc]<=0)
        {
            cc--;
        }
     if(a[dt]>0&&a[cc]>0)
     {
         break;
     }
    }
    cout<<dt<<' '<<cc;
}
