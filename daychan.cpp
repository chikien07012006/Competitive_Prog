#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n+5],tam[n],ma[n],k=0,d=0,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n+5;i++)
    {
        if(a[i]%2==0)
        {
            tam[k]=a[i];
            k++;
            d++;
        }
        else
        {
            if(d>max)
            {
             max=d;
             for(int i=0;i<k;i++)
             {
                 ma[i]=tam[i];
             }
            }
            k=0;
            d=0;
        }
    }
    cout<<max<<endl;
    for(int i=0;i<max;i++)
    {
        cout<<ma[i]<<' ';
    }
}
