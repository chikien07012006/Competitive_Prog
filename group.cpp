#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k; long long a[n],d=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=k) ;
            else d++;
        }
        cout<<d+1<<endl;
    }
}
