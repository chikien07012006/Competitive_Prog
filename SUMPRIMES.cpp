#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int ktrprime(int x)
{
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return false;

        }
    }
    return true;
}
int main()
{
    long long k,s=0,tam;
    cin>>k;
    if(ktrprime(k)==true)
    {
        cout<<k;
        return 0;
    }
    tam=sqrt(k);
    for(int i=2;i<=tam;i++)
    {
        if(k%i==0)
        {
            if(ktrprime(i)==true) s=s+i;
           if(k/i!=i){ if(ktrprime(k/i)==true) s=s+k/i;}
        }
    }
    if(s==0){cout<<k; return 0;}
    cout<<s;
}

