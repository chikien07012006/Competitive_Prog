#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;ll fl=0,s=0;
    for(ll i=0;i<n.size();i++)
    {
        s=s+(n[i]-48);
        if(n[i]=='0')fl=1;
    }
    if(fl==0)cout<<-1;
    else
    {
        if(s%3==0)
        {
            sort(n.begin(),n.end());for(ll i=n.size()-1;i>=0;i--)cout<<n[i];return 0;
        }
        cout<<-1;
    }
}
