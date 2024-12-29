#include<bits/stdc++.h>
using namespace std;
string n;
void xl()
{
    for(int i=n.size()-1;i>=0;i--)
    {
        cout<<n[i];
    }
    return ;
}
int main()
{
    cin>>n;
    xl();
}
