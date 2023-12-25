#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x%2==0){printf("the number is an odd number.");}
    else{printf("the number is an even number.");}
    return 0;
}
