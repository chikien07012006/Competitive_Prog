#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
int main()
{
    ios_base::sync_with_stdio(0);
    char a; string n; cin>>a>>n;
    For(i,0,n.size()-1)
    {
        if(n[i]==a) re++;
    }
    cout<<re;
}



