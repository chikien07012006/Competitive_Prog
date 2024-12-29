#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,sl=1,flag=0,t=0,k=0;
    cin>>n; long long a[n],b[n],tam[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i]; cin>>b[i];
    if(b[i]>0)
    {
        flag=1;
        sl=sl+b[i];
        sl--;
        t=t+a[i];
        a[i]=-1;
    }
    }
    if(flag==0)
    {
        sort(a,a+n);
        cout<<a[n-1]; return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1)
            {
                tam[k]=a[i];
                k++;
            }
        }
        if(k>=sl)
       {
         sort(tam,tam+k,greater<long long>());
            for(int i=0;i<sl;i++)
            {
                t=t+tam[i];
            }
        cout<<t; return 0;
       }
       else
       {
           for(int i=0;i<k;i++)
           {
               t=t+tam[i];
           }
           cout<<t; return 0;
       }
    }
}
