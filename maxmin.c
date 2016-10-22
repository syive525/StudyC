#include<stdio.h>

/*First Program for Sunying*/

int getmax(int *a, int size){
   int max = a[0];
   for (int i=1;i<size;i++){
     if(max<a[i]){
       max = a[i];
       printf("step i %d: max %d a[i] %d\n", i, max, a[i]);
     }
   }
   return max; 
}

int getmax2(int *a, int size){
   int max = a[0];
   int j=0;
   for (int i=1;i<size;i++){
     if(max<a[i]){
       max = a[i];
       j=i;
     }
   }
   max=a[0];
   for (int i=1;i<size;i++){
     if(max<a[i]){
       if(j!=i)
         max = a[i];
     }
   }   
   /*
   printf("max value is %d,j %d\n", max, j);
   int k;
   k=a[9];
   a[9] = a[j];
   a[j] = k;
   max = getmax(a,9);
   */
   return max; 
}


int main(){ // main: entry point of a program, int is the return type
  int a[10] = {2,54,34,6,78,9,11,10,8,19};
  int max = getmax(a, 10);
  printf("max value is %d\n", max);
  
  int max2 = getmax2(a, 10);
  printf("max2 value is %d\n", max2);
  
  return 0;                // return 0, usually indicate is successful
}

