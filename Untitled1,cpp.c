#include<stdio.h>
int main()
{
    int n,scc;
    scanf("%d",&n);
    while(n>0)
    {
        scc=n%10;
        n=n/10;
        printf("%d",scc);
    }

}
