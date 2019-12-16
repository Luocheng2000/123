#include <stdio.h>
#define LEN 10

int main(void)
{

    int a[LEN], max, i;
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < LEN; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("max is %d\n", max);
    return 0;
}