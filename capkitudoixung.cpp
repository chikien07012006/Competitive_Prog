#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long d=0;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[a.size()-i-1])d++;
    }
    cout<<d;
}
