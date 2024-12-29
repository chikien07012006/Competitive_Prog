#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    long long a[k],b[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<n||b[i]<n)
        {
            cout<<"UPLOAD ANOTHER"<<endl; continue;
        }
        if(a[i]==b[i])
        {
                cout<<"ACCEPTED"<<endl; continue;
        }
        cout<<"CROP IT"<<endl;
    }

}

