#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const long long k=20122007;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,res=1;
    cin>>n;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0&&(n/i!=i)){
            long long t=pow(3,i);
        res=res*(t-1)%k;
            long long t1=pow(3,n/i);
        res=res*(t1-1)%k;}
        if(n%i==0&&(n/i==i)) {long long t=pow(3,i);res=res*(t-1)%20122007;}
    }
    cout<<res;
}
