#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long fibonacci_(long n);

int main()
{   
    printf("%ld", fibonacci_(30));
    return 1;
}

long fibonacci_(long n){
    if(n <= 2){
        return 1;
    }else{
        return fibonacci_(n-2) + fibonacci_(n-1);
    }
    
    
}


