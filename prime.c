#include <stdio.h>  

int main()
{
    int i, count = 0;
    int num = 21;
    for(i = 1; i <= num; i++) { 
        if(num % i == 0) 
        {
            count += 1; 
    }
    } 
    if(count > 2){ 
        printf("%d is not prime", num);
    }
    else{
    printf("%d is prime", num);
    }
return 0;
}