#include<stdio.h>
int main()
{
    int y;
    printf("Year:");
    scanf("%d",&y);
    if(y % 400 == 0)
    {
        printf("Leap");
    }
    else if( y % 4 == 0 && y % 100 != 0)
    {
        printf("Leap");
    }
    else{
        printf("Non Leap");
    }
    return 0;
}