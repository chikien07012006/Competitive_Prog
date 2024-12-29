#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[105],t=1;
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    for(ll i=0;i<n.size();i++)
    {
        if(n[i]<='9'&&n[i]>='0')
        {
            a[t]=long(n[i]);t++;
        }
    }
    t--;
    sort(a+1,a+1+t);
    for(ll i=1;i<t;i++)
    {
        cout<<char(a[i])<<'+';
    }
    cout<<char(a[t]);
}
