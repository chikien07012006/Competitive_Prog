#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, dem=0,t;
    cin>>n; cin>>k;
    for(int i=1;i<=n;i++)
    {
         cin>>t;
        if(t==k)
        {
            dem++;
        }
    }
    cout<<dem;
}
