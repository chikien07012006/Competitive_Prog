#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    freopen("NGOAC797.inp","r",stdin);
    freopen("NGOAC797.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        stack<ll>a;
        a.push(0);
        string n; cin>>n;
        ll fl=0;
        For(i,0,n.size()-1)
        {
            if(n[i]==']')
            {
                if(char(a.top())!='[')
                {

                    fl=1; cout<<0<<endl; break;
                }
                a.pop(); continue;
            }
            if(n[i]==')')
            {
                if(char(a.top())!='(')
                {
                    fl=1; cout<<0<<endl; break;
                }
                a.pop(); continue;
            }
            if(n[i]=='}')
            {
                if(char(a.top())!='{')
                {
                    fl=1; cout<<0<<endl; break;
                }
                a.pop(); continue;
            }
            a.push(n[i]);
        }
        if(fl==0)cout<<1<<endl;
    }
}

