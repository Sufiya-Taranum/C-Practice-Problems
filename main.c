#include <stdio.h>
#include <assert.h>
#include "Prime.h"

int main()
{
    /*assert(is_prime(3)==1);
    assert(is_prime(2)==1);*/
    int first_n_prime_numbers(int n)
    {
    int i,count=0;
    for(i=2;count<n;i++)
    {
        if(is_prime(i)){
            printf("%d",i);
            printf("\t");
            count++;
        }
    }
    printf("\n");
    if(count==n)
        return 1;

    return 0;
    }

    assert(first_n_prime_numbers(5));
    return 0;
}
