#include<bits/stdc++.h>
using namespace std;
vector<long long>a;
long long n;
int main()
{
    cin>>n; long long b[n];
    for(long long i=1;i<=n;i++) cin>>b[i];
    sort(b+1,b+1+n);
    for(long long i=1;i<=n;i++)
    {
        if(b[i]%2==1)
        {
            a.push_back(b[i]);
        }
    }
    for(long long i=n;i>=1;i--)
    {
        if(b[i]%2==0)
        {
            a.push_back(b[i]);
        }
    }
    for(long long i=0;i<a.size();i++)
    {
        cout<<a[i]<<' ';
    }
}
