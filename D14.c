#include<stdio.h>
int main()
{
    int num, rem,rev = 0, temp;
    printf("num=",num);
    scanf("%d",&num);
   temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        rev= rev * 10 + rem;
        temp /= 10;
    };
    if (num == rev)
    {
        printf("Its a palindrome");
    }
    else{
        printf("Nope");
    }
    
}