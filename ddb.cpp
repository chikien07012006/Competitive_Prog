#include<stdio.h>
long long n,a[2*1000000],b[2*1000000];
void xl()
{
    long long d=0;
    for(long long i=2;i<=2*1000000;i++)
    {
        if(a[i]==0)
        {
           d++;
           for(long long j=i*i;j<=2*1000000;j=j+i)
           {
               a[j]=1;
           }
        }
        b[i]=d;
    }
}
int main()
{
    long long h;
    xl(); scanf("%lld",&h);
    for(long long i=0;i<h;i++)
    {scanf("%lld",&n);
    printf("%lld\n",b[2*n]-b[n]);}
}
