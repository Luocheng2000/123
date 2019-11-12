#include <stdio.h>
int main(void)
{
    int choice;
    double price;
    int i;
    printf("[1]apple\n");
    printf("[2]pear\n");
    printf("[3]orange\n");
    printf("[4]grape\n");
    printf("[0]exit\n");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            break;
        case 1:
            price = 3.00;
            break;
        case 2:
            price = 2.50;
            break;
        case 3:
            price = 4.10;
            break;
        case 4:
            price = 10.20;
            break;
        default:
            price = 0.00;
            break;
        }
        if (choice == 0)
            break;
        printf("%.2f", price);
    }
    return 0;
}