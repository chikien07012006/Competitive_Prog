#include<iostream>
using namespace std;
long long a[102],res=0;
int main()
{
    long long n,t;cin>>n;for(long long i=1;i<=n;i++){cin>>t;a[t]++;}
    for(long long i=1;i<=100;i++)
    {
       // cout<<a[i]/2<<endl;
        res=res+a[i]/2;
    }
    cout<<a[100];
    cout<<res;
}
