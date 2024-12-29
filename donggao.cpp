#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    cin>>k;
    for(int i=0;i<=k/3;i++)
    {
        long long a=i*3;
        if((k-a)%5==0)
        {
            cout<<(k-a)/5+i; return 0;
        }
    }
    cout<<-1;
}
