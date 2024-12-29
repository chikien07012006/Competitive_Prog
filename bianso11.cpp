#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;

    ll re=n[0]-48;
    for(ll i=1;i<n.size();i++)
    {
        if(i%2==1)
            re=re-(n[i]-48);
        if(i%2==0)
            re=re+(n[i]-48);
    }
 //   if(n[0]=='8'&&n[1]=='6'&&n[2]=='5')cout<<re<<endl;
    if(re%11==0)cout<<"YES";
    else cout<<"NO";
}
