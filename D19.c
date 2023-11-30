#include<stdio.h>
int main()
{
    int n = 10;
    printf("the factors for %d are:",n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
