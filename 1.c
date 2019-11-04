#include<stdio.h>

int main (void)
{
    int x;
    printf("Enter x:" );
    scanf("%d",&x);
    if(x<0)
    {x=(-x);
    }
    else
    {
        x=x;
    }
    printf("x is %d\n" ,x);
    return 0;

}