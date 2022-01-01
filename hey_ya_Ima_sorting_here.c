#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void sort(int r[], const int i){
   int le = 0;
   while(le < i){
   for(int j = 0; j <= i; j++){
      if( *(r+j+1) < *(r+j)){
         le = 0;
         int temp = *(r+j);
         *(r+j) = *(r+j+1);
         *(r+j+1) = temp;
      }
      else{
         le += 1;
         
      }
   }
   }
}
 
int sorted(int a[], int length){
    for(int i = 0; i < length; i++){
        if(a[i+1] < a[i]){
            printf("Nope Buddy\n");
            return 0;
        }
    }
   printf("Yes this dude is sorted\n");
   return 1;
   }




/* main function to call above defined function */
int main () {
   srand(time(NULL));
   ///creating a random array here
   int r[1000];
   //for(int j = 0; j<1000; j++){r[j] = rand()%100;}
   /// see if sorting thing worked.
   sort(r,1000);
   printf("%d", sorted(r,1000));
   return 0;
}