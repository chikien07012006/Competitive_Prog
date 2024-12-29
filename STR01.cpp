#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;char c;
    long d=0;
    getline(cin,s);
    cin>>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            d++;
        }
    }
    cout<<d;

}
