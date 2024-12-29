#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,x=562018,res=6;
    cin>>n;
    while(x%n!=0)
    {
        x=(x*1000000)%n+562018;res=res+6;
    }
    cout<<res;
}
