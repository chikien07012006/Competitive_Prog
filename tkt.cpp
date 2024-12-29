#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    long long d=1,max=0,i;
    char ktct;
    cin>>n;
    char n1[n.size()];
    for(i=0;i<n.size();i++)
    {
        n1[i]=n[i];
    }
    sort(n1,n1+n.size());
    for(int i=0;i<n.size()-1;i++)
    {
        if(n1[i]==n1[i+1])
        {
            d++;
        }
        else
        {
            if(max<d)
            {
                max=d;
                ktct=n1[i];
            }
             d=1;
        }
    }

    cout<<ktct;
}
