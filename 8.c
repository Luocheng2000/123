#include <stdio.h>

int main(void)
{
    int n, i, f1 = 1, f2 = 1, f3;
    double fact;
    printf("Enter n:\n");
    scanf("%d", &n);
    printf("%10d %10d", f1, f2);

    for (i = 3; i <= n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%10d ", f3);
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}