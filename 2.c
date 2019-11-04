#include<stdio.h>

int main(void)
{
    int max, i, j, k;
    printf("Enter i, j, k:\n");
    scanf("%d%d%d",&i,&j,&k);
    if(i>j&&i>k)
        max=i;
    if(j>i&&j>k)
        max=j;
    if(K>i&&k>J)
        max=k;
    printf("max is %d/n",max);
    return 0;
}