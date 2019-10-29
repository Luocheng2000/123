#include <stdio.h>

int main(void)
{
    int a, b, c, d, sum;
    float aver;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    printf("Enter d:\n");
    scanf("%d",&d);
    sum = a + b + c + d;
    aver = sum / 4.0f;
    printf("sum is %d, average is %.1f\n", sum,aver);
    return 0;
}