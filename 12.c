#include <stdio.h>
int isprime(int x)
{
    int i;
    for(i=2;i<=x; i++)
    {
        if(x%i==0){
            break;
        }
    }
    if(i>x){
        return 1;
    }else{
        return 0;
    }
}
void main(void)

{
    int n, i;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if(n%i==0)
        {
        break;
        }
    }
    if (i == n)
    {
        printf("yes!\n");
    }
    else
    {
        printf("no!\n");
    }
    return 0;
}