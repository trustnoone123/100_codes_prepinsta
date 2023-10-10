#include<stdio.h>
int main()
{
    int i, a, b, sum=0;
    printf("a=",a);
    scanf("%d",&a);
     printf("b=",b);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        sum= sum+i;
    }
    printf("sum= %d",sum);
    return 0;
}