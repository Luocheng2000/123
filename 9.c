#include <stdio.h>
 
int main(void)
{
    int i, n;
    double x = 1, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        x = x / i;
        sum += x;
    }
    sum += 1;
    printf("sum = %.5lf\n", sum);
    return 0;
}
