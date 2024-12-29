#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t=1,d=1,k=1,n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(d==k)
        {
           // k++;
            t=t+(k+1)-t%(k+1); k++;d=1;continue;
        }
        if(d<k)
        {
            t=t+k;d++;
        }
    }
    cout<<t;
}
