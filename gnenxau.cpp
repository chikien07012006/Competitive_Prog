#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;long long k,d=0;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]>=49&&n[i]<=57)
        {
            d=d*10+(n[i]-48);
        }
        else
        {
            if(d==0)
            {
                cout<<n[i];
            }
            else
            {
                for(int j=0;j<d;j++)
                {
                    cout<<n[i];
                }
                d=0;
            }
        }
    }
}
