#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=1;
    cin>>n;long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        s=s*(a[i]-i);
    }
    cout<<s;
}
