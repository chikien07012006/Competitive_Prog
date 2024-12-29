#include<bits/stdc++.h>
using namespace std;
long ktxdx(string a)
{
    string b;
    for(int i=a.size()-1;i>=0;i--)
    {
        b=b+a[i];
    }
    if(b==a)
    return 1;
    return 2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string s,c;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        string sub1=s.substr(0,i+1);
        string sub2=s.substr(i+1,s.size()-i-1);
        c=sub2+sub1;
        if(ktxdx(c)==1)
        {
            cout<<sub1.size(); return 0;
        }
    }
    cout<<0; return 0;
}
