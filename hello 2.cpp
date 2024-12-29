#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k=0,flag=0;
    cin>>n;
    string a;
    string t;
    cin>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(n==1)
        {
            cout<<"YES";
            return 0;
        }
                for(int j=0;j<a.size();j++)
        {
            if(t[k]==a[j])
            {
                k++;
                if(k==t.size())
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

