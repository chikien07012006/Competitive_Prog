#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            cout<<a[i];return 0;
        }
    }
    cout<<0;
}
