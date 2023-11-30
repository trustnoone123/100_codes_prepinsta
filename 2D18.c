// without using inbuilt
#include<stdio.h>
int main() 
{
    int base;
    printf("Enter base:",base);
    scanf("%d",&base);
    int exp;
    printf("Enter Exp:",exp);
    scanf("%d",&exp);
    int result = 1;
    while ( exp != 0)
    {
        result *= base;
        --exp;
    }
    printf("fact = %d", result);
    return 0;
}