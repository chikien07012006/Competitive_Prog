#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n;
    cin>>k;
    long long a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    cin>>n;
    for(int i=1;i<1000000000000;i++)
    {
        for(int j=0;j<k;j++)
            {
                if(i%a[j]==0)
                {
                    break;
                }
                else
                {
                    if(j==k-1)
                    {
                        if(i==n)
                        {
                            cout<<i;
                            return 0;
                        }
                    }
                }
            }
    }
}
