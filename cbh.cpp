#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long n,ma=1;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(((n/i)%i)==0)
            {
                if(i>=ma) ma=i;
            }
        }
    }
    cout<<ma;
}
