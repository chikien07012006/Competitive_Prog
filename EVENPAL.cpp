#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        ll fl=0;
        string n; cin>>n;
        For(i,0,n.size()-1)
        {
            if(n[i]==n[i+1])
            {
                cout<<"YES"<<endl; fl=1;break;
            }
        }
        if(fl==0) cout<<"NO"<<endl;
    }
}

