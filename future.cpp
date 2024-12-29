#include<stdio.h>
#include<math.h>
//#include<conio.h>
//9 7 10 6 17 4 19 21 13
int ktsnt(int z)
{
    if((z == 3)||(z==5)||(z==2))
        {
   //         printf("z: %d line 9\n",z);
            return true;
        }

    for(int i=2;i<z/2;i++)
    {
        if(z%i==0)
        {
     //       printf("z:%d,i:%d\n", z, i);
            return false;
        }
    }
    return true;
}
int ktstl(int number)
{
    if(number == 4)
        return true;
    if(number == 8)
        return false;
    if(ktsnt(number) == true)
        return false;

    for(int i=2;i<=sqrt(number)+3;i++)
    {
        if(number%i==0)  //neu tim duoc 1 uoc
        {
            //printf("i:%d, (number/i):%d\n",i, number/i);
            if(ktsnt(number/i)==false||(ktsnt(i)==false))
                {
                    {
                  //      printf("line 36\n");
                        return false;
                    }
                }
        }
    }
return true;
}
int main()
{
    int n,d=0;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
 //       printf("\n\ndang kiem tra a[%d]: %d\n",i, a[i]);
        if(ktstl(a[i])==true)
        {
 //           printf("a[%d]: %d la stl\n", i, a[i]);
            d++;
        }
    }
    printf("%d",d);
}
