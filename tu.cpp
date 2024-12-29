#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("TU.INP","r",stdin);
    //freopen("TU.OUT","w",stdout);
    string n;
    getline(cin,n);
    for(int i=0;i<n.size();i++)
    {
        if(i==0)
        {
            if(n[i]>=65&&n[i]<=90)
            {
                ;
                continue;
            }
            else
            {
                n[i]=n[i]-32;
                continue;
            }
        }
        if(n[i]==' ')
        {
            if (n[i+1]==' ')
            {
                ;
            }
            else
            {
               if(n[i+1]>=65&&n[i+1]<=90)
            {
                ;
            }
            else
            {
                n[i+1]=n[i+1]-32;
            }
            }

        }
        else
            {
                if(n[i-1]==' ')
                {
                    ;
                }
                else
                {
                if(n[i]>=65&&n[i]<=90)
            {
                n[i]=n[i]+32;
            }
            else
            {
                ;
            }
                }

            }
    }
    cout<<n;
}
