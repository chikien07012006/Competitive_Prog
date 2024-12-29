#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,tam=0,d=1,ma=0;
    cin>>n>>k; long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        tam=a[i];
        for(int j=i+1;j<n;j++)
        {
            tam=tam+a[j];
            d++;
            if(tam%k==0)
            {
                if(d>ma) ma=d;
            }
            if(j==n-1) d=1;
        }
    }
    cout<<ma;
}
