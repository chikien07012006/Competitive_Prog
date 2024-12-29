#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=0;
    cin>>n; long long a[n],b[n],j=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n); sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        while(1)
        {
            if(a[i]<b[j])
            {
                d++; j++; if(j==n-1)
            {
                if(a[i+1]<b[j])
                {
                    d++; cout<<d; return 0;
                }
                else
                {
                    cout<<d;return 0;
                }
            }
            break;
            }
            if(a[i]>=b[j])
            {
             j++;
             if(j==n-1)
            {
                if(a[i]<b[j])
                {
                    d++; cout<<d; return 0;
                }
                else
                {
                    cout<<d;return 0;
                }
            }
            continue;
            }
        }
    }
}
