#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; int d=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]%2!=0)
        {
            d++;
        }

    }
    cout<<d;
}
