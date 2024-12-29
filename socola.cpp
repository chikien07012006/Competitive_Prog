#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d,m,dem=1,t=0;
    cin>>n;
    #define ll long long;
    #define iobs ios_base::sync
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
        {
            t=t+a[j];
        }
        if(t==d)
        {
            dem++;
        }
        }
    cout<<dem;
}
