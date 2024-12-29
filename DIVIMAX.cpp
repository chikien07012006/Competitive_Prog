#include<stdio.h>
#include<math.h>
int SLU(long x)
{
    int d=0,k=sqrt(x);
    for (int i=1;i<=k;i++)
        if (x%i==0) d+=2;
    if(k*k==x) d--;
    return d;
}

int main()
{
    long D[100001],A[10001],n,i,Max=0;
    scanf("%ld",&n);
    for (i=1;i<=n;i++)
    {
    	scanf("%ld",&A[i]);
    	D[i]=SLU(A[i]);
    }

    for (i=1;i<=n;i++)
        if (Max<D[i]) Max=D[i];

    printf("%ld\n",Max);
    for (i=1;i<=n;i++)
        if (Max==D[i]) printf("%ld ",A[i]);
}
