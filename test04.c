#include <stdio.h>

int main(void)
{
    int x, y;
    printf("输入用户月用电量(千瓦时）\n");
    scanf("%f", &x);
    if (x <= 50)
    {
        y = 0.53 * x;
    }
    else
    {
        y = 0.58 * x - 2.5;
    }
    printf("应支付的电费%f(元）", y);
    return 0;
}
