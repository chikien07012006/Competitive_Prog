#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;
    while(cin>>n)
    {ll t=0,fl=0;
        for(ll i=0;i<=(n.size()-1)/2;i++)
        {
            if(n[i]!=n[n.size()-i-1])t++;
            if(t>2){cout<<"NO"<<endl;fl=1;break;}
        }
        if(fl==0){cout<<"YES"<<endl;}
    }
}
