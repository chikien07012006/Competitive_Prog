#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long k,a=1,b=1,c,tam;
    cin>>k;
    for(int i=3;i<=k%900;i++)
    {
        c=(a+b)%100;
       // cout<<c<<endl;
        tam=a%100;
      //  cout<<tam<<endl;
        a=b%100;
   //     cout<<a<<endl;
        b=(tam+b)%100;
     //   cout<<b<<endl;
    }
    cout<<c;
}
