#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k>>a>>b;
        if(a*2>=b)
        {
            if((k-1)%2==0)
            {
                cout<<((k-1)/2)*b+a<<endl; continue;
            }
            if(k%2==0)
            {
                cout<<(k/2)*b<<endl; continue;
            }
        }
        cout<<a*k<<endl;
    }
}
