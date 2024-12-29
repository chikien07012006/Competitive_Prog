#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(a.size()<b.size())
    {
        cout<<b.size()-a.size();

    }
    else
    {
        cout<<a.size()-b.size();
    }
}
