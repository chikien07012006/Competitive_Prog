#include<stdio.h>
#include<math.h>
bool NT(int x)
{
    if (x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int j=a;j<=b;j++)
        if(NT(j))
        printf("%d\n",j);
}
