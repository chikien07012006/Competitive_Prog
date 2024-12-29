#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void a(long long k,string n)
{
    long long l=0,r=n.size()-k,mi=-1;
    for(int j=0;j<k;j++)
    {
        for(int i=l;i<=r;i++)
        {
            if((long)n[i]>mi)
            {
                mi=n[i];
                l=i+1;
            }
        }
        cout<<(char)mi;
        r++;
        mi=-1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    string n;ll h;
    cin>>n>>h;ll k=n.size()-h;
    a(k,n);
}
