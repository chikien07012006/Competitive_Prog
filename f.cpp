#include<iostream>
using namespace std;
long long a[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(long long i=1;i<=n;i++)cin>>a[i];
        a[n+1]=-1e9;
        i=1;
        while(a[i]<a[i+1]) i++;
        if(i==1)
        {
            cout<<"NO"<<endl;continue;
        }
        long long j=i;
        while(a[i]>a[i+1]) i++;
        if(i==j)
        {
            cout<<"NO"<<endl;continue;
        }
        while(a[i]<a[i+1]) i++;
        if(i==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
