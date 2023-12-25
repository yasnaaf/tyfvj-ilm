#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("enter 3 numbers:\n");
    scanf(" %f %f %f",&a,&b,&c);
    if(a>b && a>c){printf("the bigger number is=%.2f",a);}
    else if(b>a && b>c){printf("the bigger number is=%.2f",b);}
    else if(c>a && c>b){printf("the bigger number is=%.2f",c);}

    return 0;
}
