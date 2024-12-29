#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s; long long d=0;
    cin>>s;
    if(s[s.size()-1]=='1'&&s[s.size()-2]=='1'&&s[s.size()-3]=='1'&&s[s.size()-4]=='0')
    {
        d=2;
        s=s.erase(s.size()-3,3);
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&&s[i+1]=='1')
        {
            s[i]='0'; s[i+1]='0';d++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&&s[i-1]=='0'&&s[i+1]=='0')
        {
            s[i]='0'; d++;
        }
    }
    cout<<d; return 0;
}
