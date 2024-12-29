#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long d=0,flag=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            d++;
        }
        flag=0;
    }
        for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            d++;
        }
        flag=0;
    }
    cout<<d;
}
