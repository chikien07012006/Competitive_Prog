#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k=0,t=0;
    cin>>n;
    while(n>t)
    {
        k++;
        t=t+k;

    }
    if(t==n)
    {
        cout<<k;
    }
    else
        {
            cout<<"NO";

        }
}
