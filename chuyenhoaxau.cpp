#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        string n; cin>>n;
        For(i,0,n.size()-1)
        {
            if(n[i]=='u'||n[i]=='e'||n[i]=='o'||n[i]=='a'||n[i]=='i')
            {
                cout<<char(long(n[i]-32));
            }
            else
            {
                if(n[i]=='U'||n[i]=='E'||n[i]=='O'||n[i]=='A'||n[i]=='I')
                {
                    cout<<n[i];
                }
                else
                {
                    if(int(n[i]+32)>'z')cout<<n[i];
                    else cout<<char(n[i]+32);
                }
            }
        }
        cout<<endl;
    }
}










