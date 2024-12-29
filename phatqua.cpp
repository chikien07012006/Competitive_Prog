#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,k=1,t=0,m=1,d=0;
    cin>>a>>b>>c;
    if(b<a)
    {
        int tam=a;
        a=b;
        b=tam; tam=0;
      //  tam=0;
    }
    if(c%a==0)
    {
        cout<<c/a; return 0;
    }
    else
    {
        while(1)
        {
            t=k*b; k++; d++;
            m=c-t;
            if(m<0)
            {
                cout<<0;
                return 0;
            }
            if(m%a==0)
            {
                cout<<m/a+d; return 0;
            }
        }
       // cout<<0; return 0;
    }
   // cout<<0; return 0;
}
