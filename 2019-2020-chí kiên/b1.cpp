#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;
        int t=0;
        for(int i=0;i<n.size();i++)
        {
            t=t+(n[i]-48);
        }
        while(t>=10)
        {
            int t1=0;
            while(t>0)
            {
                t1=t1+t%10;
                t=t/10;
            }
            t=t1;
        }
        cout<<t;
}
