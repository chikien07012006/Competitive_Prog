#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
bool check(string n)
{
    ll i=0,fl=0,j=n.size()-1;
    while(i<=j)
    {
        if(n[i]==n[j]);
        else
        {
            fl=1; break;
        }
        i++;j--;
    }
    if(fl==1) return 0;
    else return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    ll fl=0;
    for(ll i=n.size()-2;i>=0;i--)
    {
        string x=n.substr(0,i+1);
        string y=n.substr(i+1,n.size()-1);
        if(check(x)==1&&check(y)==1)
        {
            cout<<x<<endl<<y; fl=1;return 0;
        }
    }
    if(fl==0)cout<<-1;
}




