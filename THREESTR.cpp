#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n; string a,b,c;
    for(long long i=1;i<=n;i++)
    {
        cin>>a>>b>>c;long long flag=0;
        for(long long i=0;i<c.size();i++)
        {
            if(c[i]!=a[i]&&c[i]!=b[i])
            {
                cout<<"NO"<<endl;flag=1;break;
            }
        }
        if(flag==0)cout<<"YES"<<endl;
    }
}
