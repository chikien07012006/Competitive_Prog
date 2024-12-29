        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            long long m,n;
            cin>>m>>n;
            for(int i=0;i<m;i++)
            {
                if(i>0&&i<m-1)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(j==0||j==n-1)
                        {
                            cout<<"*";
                        }
                        else
                        {
                            cout<<' ';
                        }
                    }
                    cout<<endl;
                }
                else
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
            }
        }
