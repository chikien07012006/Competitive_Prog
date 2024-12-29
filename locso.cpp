#include<bits/stdc++.h>
#include<string>
using namespace std;
string xs0(string n)
{
    long long d=0;
    while(d< n.size()&&n[d]=='0')
    {
        d++;
    }
    n.erase(0,d);
    if(n.size()=='0')
    {
        n="0";
    }
    return n;
}
long long ss(string a, string b)
{
    if(a.size()>b.size()) return 1;
    if(a.size()<b.size()) return -1;
    if(a>b) return 1;
    if(a<b) return -1;
    if(a==b) return 0;
}
int main()
{
    string n,max="0",tam="";
    getline(cin,n);
    n=n+' ';
    for(int i=0;i<n.size();i++)
    {
        if(n[i]>=48&&n[i]<=57)
        {
            tam=tam+n[i];
        }
        else
        {
            tam=xs0(tam);
            if(ss(tam,max)==1)
            max=tam;
                tam="";
        }
    }
    cout<<max; return 0;
}
