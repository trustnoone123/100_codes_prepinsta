#include<stdio.h>
int main()
{
    int n = 200, f = 1;
 
    if(n < 0)
    {
        printf("no negative number");

    }
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Fact %d = %d", n, f);
}

