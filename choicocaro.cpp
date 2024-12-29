#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool check(ll x,ll y)
{
    if(x==1&&y==1)return 1;
    if(x==1&&y==3)return 1;
    if(x==3&&y==1)return 1;
    if(x==3&&y==3)return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        char a; ll x1,y1,x2,y2;
        cin>>a>>x1>>y1>>x2>>y2;
        if(x1==2&&y1==2)
        {
            cout<<a<<endl;continue;
        }
        if(check(x1,y1)==1&&x2==2&&y2==2)
        {
            cout<<"draw"<<endl;continue;
        }
        if(check(x1,y1)==1&&x2!=2&&y2!=2)
        {
            cout<<a<<endl; continue;
        }
        if(a=='A')cout<<'B'<<endl;
        else cout<<'A'<<endl;
    }
}



