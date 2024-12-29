#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string t,t1;ll a;
void xm(string n)
{ll r=n.size()-a,j=0,l=0;
    while(r<=n.size())
    { char h='z';ll u,fl=0;
     for(ll i=l;i<=r;i++)
     {
        if(h>n[i]){h=n[i];u=i;}
     }
     t1=t1+h;r++;l=u+1;
    }
    cout<<t1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>a;cin>>n;
   // for(ll i=0;i<n.size();i++){if(n[i]>='0'&&n[i]<='9')t=t+n[i];}
    xm(n);
}

