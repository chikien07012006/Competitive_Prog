#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long long n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+pow(i,1./3);
    }
    cout<<s;
}
