#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;ll i=0;//n=n.erase(0,n.size());
    while(n.size()>1)
    {
        while(i<n.size())
    {
        if(n[i]==n[i+1])
        {
            n=n.erase(i,2);
            //cout<<n.size()<<endl;
            i=i+2;
        }
        else i=i+1;
    }
    if(n.size()==0){cout<<"YES";return 0;}if(n.size()==1){cout<<"NO";return 0;}
    i=0;
    }
    cout<<n;
}
