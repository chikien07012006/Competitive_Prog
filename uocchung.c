#include<bits/stdc++.h>
using namespace std;
int ucln(int a,b)
{
     if(a==b)
    {
        return a;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
}
