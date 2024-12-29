#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll re=0,re1=1;
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    for(ll i=1;i<n.size();i++)
    {
        ll h=0,k=i;
        while(n[h]==n[k])
        {
         h++;k++;
        }
        if(re<h)
        {
            re=h;
            re1=i;
        }
    }
    cout<<re<<"\n"<<re1;
}
