#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;
    for(long long i=0;i<n.size();i++)
    {
        if(n[i]==n[i+1]){cout<<"NO";return 0;}
    }
}
