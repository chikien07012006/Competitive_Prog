#include<bits/stdc++.h>
using namespace std;
#include<math.h>
bool NT(int x)
{
    if (x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<1000000000000;i++)
    {
        if(NT(i)==1)
        {
            cout<<i;
            return 0;
        }
    }
}
