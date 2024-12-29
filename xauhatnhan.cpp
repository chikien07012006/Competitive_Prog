#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long k; string n;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>n;
        for(int j=0;j<n.size();j++)
        {
            if(n.size()%(j+1)==0)
            {
                string sub=n.substr(0,j+1);
                string subtam="";
                long long solanlap=n.size()/sub.size();
                for(int k=1;k<=solanlap;k++) subtam=subtam+sub;
                if(subtam==n)
                {
                    cout<<sub<<endl; break;
                }
            }
        }
    }
}
