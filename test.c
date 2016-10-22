#include<stdio.h>

/*First Program for Sunying*/

int main(){ // main: entry point of a program, int is the return type
  int i,j,k;
  i=9;j=3;
  k=i/j;
  /*
  if(i>=j)
    printf("bigger value is i %f\n", i); // print out to standard IO
  else
    printf("bigger value is j %f\n", j);  
  */
  k=getbigger(i,j);
  printf("bigger value is k %d\n", k);
  
  for(int i=0;i<10;i++)
      printf("%d \n", i);
  
  return 0;                // return 0, usually indicate is successful
}

int getbigger(int a, int b){
    return a>=b?a:b;
}   