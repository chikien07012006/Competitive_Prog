#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,d=0;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        long long s=a[i]+k;
        if(s>=a[n-1])
        {
            if(s==a[n-1])
            {
                cout<<d+1; return 0;
            }
            cout<<d; return 0;
        }
        for(int j=i;j<n;j++)
        {
            if(a[j]>s)
            {
                break;
            }
            if(a[j]==s)
            {
                d++;
                break;
            }
        }
    }
    cout<<d;
}
