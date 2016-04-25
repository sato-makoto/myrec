#include<stdio.h>
#include<stdlib.h>
 
int rec(int n);
  
int rec(int n){
  if (n == 0)
    return 0;
  else
    return  1 + rec(n - 1);
}
 
int main(int argc , char **argv)
{
  if (argc < 2) {
    printf("No option!\n");
    exit(1);
  }
  int rec_num =  atoi(argv[1]);
  printf("%d\n", rec(rec_num));
  return 0;
}
