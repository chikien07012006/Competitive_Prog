#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=0,ma=-1000000000;
    cin>>n; long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            t=t+a[j];
            if(t>=ma) ma=t;
        }
        t=0;
    }
    cout<<ma;
}
