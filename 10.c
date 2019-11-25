#include <stdio.h>

void main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (3 == i)
            break;
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
