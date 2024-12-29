#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=1,sct,max=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            d++;
        }
        else
        {
            if(d>max)
            {
                max=d;
                sct=a[i];
            }
            d=1;
        }
    }
    cout<<sct;
}
