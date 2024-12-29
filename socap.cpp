#include<iostream>
#include<algorithm>
using namespace std;
long long d[100000], a[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=0;cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }long long i=1;
    sort(a+1,a+1+n);
    while(i<=n)
    {
        t=t+(d[a[i]]*(d[a[i]]-1)/2);
        i=i+d[a[i]];
    }
    cout<<t;
}
