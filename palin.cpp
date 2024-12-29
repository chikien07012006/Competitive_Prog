#include<bits/stdc++.h>
using namespace std;
long ktxdx(string a)
{
    string b;
    for(int i=a.size()-1;i>=0;i--)
    {
        b=b+a[i];
    }
    if(b==a)
    return 1;
    return 2;
}
int main()
{
    ios_base::sync_with_stdio(0);
 long long k; string n,ma="z";
 cin>>k;
 cin>>n;
 for(int i=0;i<=n.size()-k-1;i++)
 {
     string sub=n.substr(i,k);
     if(ktxdx(sub)==1)
     {
        if(sub<ma)
        {
            ma=sub;
        }
     }
 }
 if(ma=="z"){cout<<-1; return 0;}
    cout<<ma;
}
