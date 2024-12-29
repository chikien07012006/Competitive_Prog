#include<iostream>
using namespace std;
typedef long long ll;
string t;
void xm(string n,long k)
{
    long long l=0,r=n.size()-k,mi=1000000000000000000000;
    for(int j=0;j<k;j++)
    {
        for(int i=l;i<=r;i++)
        {
            if((long)n[i]<mi)
            {
                mi=n[i];
                l=i+1;
            }
        }
        cout<<(char)mi;
        r++;
        mi=100000000000000000000000;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll a;
    string n,t;cin>>a;cin>>n;
    for(ll i=0;i<n.size();i++){if(n[i]>='0'&&n[i]<='9')t=t+n[i];}
    xm(t,a);
}
