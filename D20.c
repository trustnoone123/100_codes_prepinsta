#include<stdio.h>
void pf(int n)
{
 printf("The prime fact:");
 for(int i = 2; n>1 ; i++){
    while(n%i == 0){
        printf("%d ",i);
        n = n / i; 
    }
 }
}

int main()
{
    int n = 10;
    pf(n);
    return 0;
}

