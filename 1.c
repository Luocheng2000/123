#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter x:\n");
    scanf("%d", &x);
    x=(x>0)?x:(-x);
    printf("x is %d\n",x);
    return 0;
}