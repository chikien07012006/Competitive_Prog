#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
vector<ll>a;
ll d=0;
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    char k; cin>>k;
    For(i,0,n.size()-1)
    {
        if(n[i]==k)
        {
            d++;
            a.push_back(i);
        }
    }
    if(d==0) cout<<"KHONG CO";
    else
    {
        cout<<d<<endl;
        For(i,0,a.size()-1)
        {
            cout<<a[i]+1<<' ';
        }
    }
}//

