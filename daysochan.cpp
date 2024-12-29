#include<stdio.h>

long long n,max=0,vt,vtln;
int main()
{
    scanf("%lld",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {   //nhập mảng
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {   //kiểm tra lần lượt từng số
        if(a[i]%2==0)
        {   //nếu như số đang kiểm tra là số chẵn
            vt=i;
            int j = i;
            long long dsc = 0;
            while(a[j]%2==0)
            {
                {
                    j++;
                    dsc++;
                    if(j>n-1)
                        break;
                }
            }
            if(max<dsc)//n
            {
                max=dsc;
                vtln=vt;
//                printf("\nmax: %d\n",max);
            }
        }
    }
    printf("%d\n",max);
    for(int j=vtln;j<max+vtln;j++)
    {
        printf("%lld ",a[j]);
    }

}
