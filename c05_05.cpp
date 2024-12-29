#include<stdio.h>
#include<math.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            if(i==n/i)
        {
            t=t+i;
        }
         else  t=t+i+n/i;
    }
    if(n*2==t) printf("YES");
        else printf("NO");

}
