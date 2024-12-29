#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
ll re=0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    string n; getline(cin,n); For(i,0,n.size()-1) if(n[i]>='0'&&n[i]<='9') re++;
    cout<<re;
}
