#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,t;
    cin>>m>>n>>t;
    if(t*n<t*m)
    {
        cout<<t*n;
        return 0;
    }
    n=n-1;
    m=n/m;
    m=m*m;
    cout<<t*m;
}

