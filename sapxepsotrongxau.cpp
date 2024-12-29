#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long k,q=0,d=0,v=0;
    k=a.size();
    char m[k];
    for(int i=0;i<k;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            m[v]=a[i];
            v++;
        }
    }
sort(m,m+v);
     for(int j=0;j<a.size();j++)
     {
         if(a[j]>=48&&a[j]<=57)
         {
             a[j]=m[q];
             q++;
             if(q==v+1)
             {
                 break;
             }
         }
     }
     cout<<a;

}
