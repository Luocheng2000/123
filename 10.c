#include <stdio.h>
int main(void)
{
    int sum, n, term;
    printf("Enter n:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        term = n % 10;
        sum += term;
        n = n / 10;
    }
    printf("sum = %d\n", sum);
    return 0;
}
