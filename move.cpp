#include<bits/stdc++.h>
using namespace std;
long long k; string n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>k;
    while(k!=0)
    {
        cin>>n;
        for(int i=n.size()-1;i>=0;i--)
        {
           if(n[i]+k%26>90)
           {
               cout<<char((n[i]+k%26)-26); continue;
           }
           cout<<char(n[i]+k%26);
        }
        cout<<endl;
        cin>>k;
    }
    return 0;
}
