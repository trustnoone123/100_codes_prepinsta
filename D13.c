#include<stdio.h>
int main(){
    int rem, rev=0,num;
    printf("num=", num);
    scanf("%d",&num);
    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    };
    printf("rev= %d\n",rev);
    return 0;
}