#include<iostream>
using namespace std;
int main()
{
    long long n,d=0,re=0,re1=0;string a;
    cin>>n>>a;
    for(long long i=0;i<n;i++)
    {
        if(a[i]=='('||a[i]=='?') d++;
        else
        {
            if(d>0)
            {
                re++;
                d--;
            }
        }
    }
    for(long long i=n-1;i>=0;i--)
    {

    }
}
