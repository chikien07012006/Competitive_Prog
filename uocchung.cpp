#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b)
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
    int a,b,l;
    cin>>a>>b;
    l=ucln(a,b);

    printf("%d/%d",a/l,b/l);
}
