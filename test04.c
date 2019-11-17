#include <stdio.h>

int main(void)
{
    int n, sum = 0, i = 1, x;
    int i;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        i = i * x;
        sum = sum + i;
    }
    printf("sum is %d\n", sum);
    return 0;
}
