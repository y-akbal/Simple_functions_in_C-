
#include <stdio.h>
#include <stdlib.h>


long factorial(long n){
    while(n > 1){
        return n*factorial(n-1);
    }
    return 1;
}



int main()
{   

    printf("%ld", factorial(10));
    return 0;
}