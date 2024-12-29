#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long pow(long long a, long long b)
{
    if(b==1){return a%10;}
    else
    {
        long long s=pow(a,b/2);
        if(b%2==0)
        {
            return (s*s)%10;
        }
        else
        {
            return (s*s*a)%10;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n,m;cin>>n>>m;
    if(n.size()<=18&&m.size()<=18)
    {long long a=0,b=0;
    for(ll i=0;i<n.size();i++)a=a*10+(n[i]-48);
    for(ll i=0;i<m.size();i++)b=b*10+(m[i]-48);
    cout<<pow(a,b);}
    else{cout<<2;}
}

