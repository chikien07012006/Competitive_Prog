#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long pt(long long n)
{
    long long k=2;
    while(k<=(sqrt(n)))
    {
        if(n%k==0){cout<<k<<'*';n=n/k;}
        else k++;
    }
   if(n>1){return n;}
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k=2;
    cin>>n;
    cout<<pt(n);
}
