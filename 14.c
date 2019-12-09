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