#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; long long a,b;
    for(long long i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>b||a==b) cout<<"FIRST"<<endl;
        else cout<<"SECOND"<<endl;
    }
}
