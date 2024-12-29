#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k=1,flag=0;
    cin>>n;
    string a,b="hello";
    for(int i=0;i<n;i++)
    {
        cin>>a;
                for(int j=0;j<a.size();j++)
        {
            if(b[k]==a[j])
            {
                k++;
                if(k==5)
                {
                    cout<<"YES";
                    cout<<endl;
                    flag=1;
                    break;
                }
            }
        }

        if(flag==0)
        {
                  cout<<"NO";
        cout<<endl;
        }
          k=0;
        flag =0;
    }

}
