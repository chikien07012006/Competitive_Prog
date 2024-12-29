#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,d=0,flag=0,flag1=0;
    cin>>n; char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  //  while(flag==0)
  // {
     for(int i=0;i<n;i++)
    {
        if(a[i]=='>'&&a[i+1]=='<')
        {
        //    flag1=1;
           a[i]='<'; a[i+1]='>'; d++;
        }
    }
 //   if(flag1==1)
//    {
     //   flag=0;
   // }
 //   else
    //{
    //    flag=1;
    //}
   // flag1=0;
 //  }
   cout<<d;
}
