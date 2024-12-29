#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[125],re=1;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;
    for(ll i=0;i<n.size();i++)
    {
        if(a[n[i]]==1)
        {
            for(ll j=97;j<=122;j++)a[j]=0;//cout<<i<<endl;
            a[n[i]]=1;re++;
        }
        if(a[n[i]]==0){a[n[i]]=1;}
    }
    cout<<re;
}
