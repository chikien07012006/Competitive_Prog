        #include <stdio.h>
        long long a,b,d=0;
        int main()
        {
            scanf("%lld %lld",&a,&b);
            for(int i=1;i<=a;i++)
            {
                if(a%i==0&&b%i==0)
                    d++;
            }
            printf("%lld",d);
        }

