#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,dt=1,d=0;
    cin>>n;
    long long a[n],cc=n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            d++;
        }
        if(d==0){cout<<-1<<' '<<-1;
        return 0;}
    }
    for(int i=0;i<n;i++)

        {
          while(1)
    {
        if(a[dt]>=0)
        {
            dt++;
        }

        if(a[cc]>=0)
        {
            cc--;
        }
     if(a[dt]<0&&a[cc]<0)
     {
         break;
     }
    }
     cout<<dt<<' '<<cc;
     return 0;
        }

    }

}
