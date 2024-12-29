#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=1;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s*a[i]%1000000007;
    }
    cout<<s;
}
