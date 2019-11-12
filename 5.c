#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter x:\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf(" apple is 3yuan/kg\n");
        break;
    case 2:
        printf("pear is 2.5yuan/kg\n");
        break;
    case 3:
        printf("orange is 4.1yuan/kg\n");
        break;
    case 4:
        printf(" grapes is 10.2yuan/kg\n");
        break;
    case 0:
        printf(" Exit\n");
        break;
    default:
        printf(" 0\n");
        break;
    }
    return 0;
}