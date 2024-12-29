#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<long long>a;
int main()
{
    long long n,d=0,ma=0,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            d++;
        }
        if(a[i]>0||i==n-1)
        {
            if(d>ma)
            {
                ma=d;
            }
            d=0;
        }
    }
    cout<<ma;
}
