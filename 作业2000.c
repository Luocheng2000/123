#include <stdio.h>
int main()
{
    int a, b, c, d;
    float sum = 0, ave;
    printf("input 4 int data:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a + b + c + d;
    ave = ((int)(sum / 4.0 * 10)) / 10.0;
    printf("sum=%lf    mean=%lf\n", sum, ave);
    return 0;
}