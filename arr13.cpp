#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            ;
        }
        else
        {
                 for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                d++;
            }
        }
        cout<<a[i]<<' '<<d;
        cout<<endl;
        d=0;
        }
    }
}
