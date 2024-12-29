#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,d=0;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                d++;
            }
        }
    }
    cout<<d;
}
