#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ktrprime(int x)
{
    if(x<2)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long n,d=0;
    cin>>n;
    if(ktrprime(n)==q&&ktrprime(n%10)==1)cout<<"YES";
    else cout<<"NO";
}
