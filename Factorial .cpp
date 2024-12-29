#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,s=1;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        s=s*i;
    }
    cout<<s;
}
