#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;cin>>n;
    if(n%3==0)
    {
        cout<<n/3*7;return 0;
    }
    if(n%3==1)
    {
        cout<<(n/3-1)*7+4;return 0;
    }
    cout<<(n/3)*7+1;
}
