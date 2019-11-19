#include <stdio.h>
int main(void)
{
    int x = 1, i, n;
    float y, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        x *= i;
        y = 1.0 / x;
        sum += y;
    }
    printf("sum is %f\n", sum);
    return 0;
}
