#include "Prime.h"

int is_prime(int n)
{
    int i;
    if(n==0||n==1)
     return 0;

     for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
            return 0;
     }
    return 1;
}
