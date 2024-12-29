#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<n;i++)
    {
        if(abs(a[i]-a[i+1])>=2)
        {
            cout<<"Yes";return 0;
        }
    }
    cout<<"No";
}
