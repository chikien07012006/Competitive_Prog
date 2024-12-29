#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=' ')
        {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else
        if(a[i]>=97&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        }
    }
    cout<<a;
}
