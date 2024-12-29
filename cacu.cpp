#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long t;
    cin>>t;
    for(long long i=1;i<=t;i++)
    {
        float t,a,b,c;
        cin>>a>>b>>c;
        printf("%0.6f",a*b/c);cout<<endl;
    }
}
