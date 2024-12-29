#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll d=0;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        d=(d*10+(s[i]-'0')%13)%13;
    }
    if(d==0) cout<<"YES";
    else cout<<"NO";
}
