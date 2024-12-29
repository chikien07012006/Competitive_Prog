#include<bits/stdc++.h>
using namespace std;
string np(string a)
{
    if(a[a.size()-1]=='0'){a[a.size()-1]='1'; return a;}
    else
    {
        long long k=a.size()-1;
        while(a[k]=='1')
        {
            a[k]='0';
            k--;
        }
        a[k]='1';
        return a;
    }
}
int main()
{
    string a,b;
    long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a=a+'0'; b=b+'1';
    }
    cout<<a<<endl;
    while(a!=b)
    {
     a=np(a);
     cout<<a<<endl;
    }
}
