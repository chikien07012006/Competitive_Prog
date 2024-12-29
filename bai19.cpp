#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=0,ma=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if((a[i]>0&&a[i-1]<0)||(a[i]<0&&a[i-1]>0))
        {
         d++;
        }
        else
        {
            if(ma<d)
            {ma=d;}
            d=0;
        }
    }
    cout<<ma;
}
