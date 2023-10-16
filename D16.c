#include<stdio.h>
int main(){
    int n = 10 ,i;
    int a=0,b=1;
    int nextterm;
    printf("%d,%d,",a,b);
    for(i = 2; i < n; i++)
    {
        nextterm= a + b;
        a = b;
        b = nextterm;
        printf("%d, ", nextterm);
    }
    return 0;
}