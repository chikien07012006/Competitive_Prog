#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m;
    cin>>n>>m;long long a[n*m],b[n*m];
    for(long long i=0;i<n*m;i++)  cin>>a[i];
    for(long long i=0;i<n*m;i++)  cin>>b[i];
    sort(a,a+n*m); sort(b,b+n*m);
    for(long long i=0;i<n*m;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"NO"; return 0;
        }
    }
    cout<<"YES"; return 0;
}
