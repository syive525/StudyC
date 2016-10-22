#include<stdio.h>

/*First Program for Sunying*/

int getmax(int *a, int size){
   int max = a[0];
   for (int i=1;i<size;i++){
     if(max<a[i])
       max = a[i];
   }
   return max; 
}




 
int main(){ // main: entry point of a program, int is the return type
  int a[10] = {2,54,34,6,78,9,11,10,8,19};
  int max = getmax(a, 10);
  printf("max value is %d\n", max);
  return 0;                // return 0, usually indicate is successful
}

