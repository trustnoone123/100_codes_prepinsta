#include<stdio.h>
#include<conio.h>
int prime(int n)
{
    if (n<2)
    {
        printf("num great than 2");
        return 0;
    }
        else
        {
            int x = n/2;
            for( int i=2; i<x ; i++)
            {
                if(n % i == 0)
                {
                    return 1;
                }
            }


        }
        return 2;
        
}
int main()
{
 int a=10, b=20;
  
    
    for(int i=a; i <= b; i++){
        if(prime(i))
            printf("%d ",i);
    }
 
    return 0;
}

