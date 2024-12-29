#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,t,x,y;
    long long kq=0;
    getline(cin,a);
    getline(cin,b);
    t=min(a.size(),b.size());
    for(int i=1;i<=min(a.size(),b.size());i++)
    {
        x=a.substr(a.size()-i,i);
        y=b.substr(0,i);
        if(x==y)
        {
            if(i>kq)
            {
                kq=i;
            }
        }
    }
    cout<<a.size()+b.size()-kq;
}
