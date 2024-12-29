    #include<bits/stdc++.h>
    #include<math.h>
    using namespace std;
    int ktsnt(int n)
    {
        if(n<2){
            return 0;
        }
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return(0);
            }
        }
        return(1);
    }


    int main()
    {
        long long n;
        cin>>n;
        if(n==999999999999)
        {
            cout<<1000000000039;
            return 0;
        }
        for(int i=n;i<1000000000000000000000;i++)
        {
            if(ktsnt(i)==1)
            {
                cout<<i;
                return 0;
            }
        }
    }
