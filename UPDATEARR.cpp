#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,mi=99999999,flag=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        long long a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]<k)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<0<<endl; continue;
        }
        else
        {
                for(int q=0;q<n;q++)
                {
                    if(a[q]<mi) mi=a[q];
                }
                cout<<k-mi<<endl;
            }
            flag=0;
            mi=99999999;
        }

}

