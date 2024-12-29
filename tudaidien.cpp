#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
int main()
{
    ios_base::sync_with_stdio(0);
    string n,a; getline(cin,n);
    cin>>a;
    For(i,0,n.size()-1)
    {
        if(n[i]!=' ')
        {
            string t;
            For(j,i,n.size()-1)
            {
                t=t+n[j];
                if(j==n.size()-1||n[j+1]==' ') break;
            }
            i=i+t.size();
            ll fl=0;
            if(t.size()!=a.size()) continue;
            For(j,0,a.size()-1)
            {
                if(a[j]=='?') continue;
                if(a[j]!=t[j]){fl=1;break;}
            }
            if(fl==0)re++;
        }
    }
    cout<<re;
}
