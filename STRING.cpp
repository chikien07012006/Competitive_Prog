#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,flag=0;string s,t;
    cin>>n>>s;
    for(long long i=0;i<n;i++)
    {
        if(s[i]!='.'&&s[i]!='*'&&flag==0) t=t+s[i];
        if(s[i]=='*'&&flag==0){flag=1;continue;}
        if(s[i]=='*'&&flag==1){flag=0;continue;}
    }
    cout<<t;
}
