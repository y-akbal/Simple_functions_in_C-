  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sorted_acc(int a[], int length){
    for(int i = 0; i < length; ++i){
        if(a[i+1] <= a[i]){
            printf("Nope Buddy\n");
            return 0;
        }
        } 

    return 1;

}
