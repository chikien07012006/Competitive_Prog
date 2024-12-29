#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    string a; ll fl=0;
    cin>>a;
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
    {
        cout<<"Weak"; return 0;
    }
    For(i,1,a.size()-1)
    {
        if((int(a[i])==int(a[i-1])+1)||(a[i]=='0'&&a[i-1]=='9')) ;
        else
        {
            fl=1; break;
        }
    }
    if(fl==0)
    {
        cout<<"Weak";
    }
    else
    {
        cout<<"Strong";
    }
}


