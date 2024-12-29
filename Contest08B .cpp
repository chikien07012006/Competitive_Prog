#include<stdio.h>
#include<cmath>
int n, slpt;
float tb,_max,tong;
int main()
{
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }

    if(n==1)
        {
            printf("%d",a[0]);
            return 0;
        }


    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            slpt=j-i+1;
            for(int k=i;k<=j;k++)
            {
                tong = a[k] + tong;

            }
             tb=tong/slpt;
             //printf("tb %d\n", tb);
             if(tb>_max)
             _max=tb;////////////////
             tong=0;
        }

    }
    printf("%d",(int)round(_max));
}
