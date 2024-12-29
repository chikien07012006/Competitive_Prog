#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    cin>>k;
    int a[k],p=0,d=0;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=100000;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(i/j==a[p])
                {
                    d++;
                    break;
                }
                else
                    break;
            }
        }
    }
    cout<<d;
}
