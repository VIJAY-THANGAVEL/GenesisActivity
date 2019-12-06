#include<stdio.h>
int main() {
  int val=100;
  int *ptr=NULL;
  ptr=&val;
  printf("%d\n",*ptr);
  *ptr=200; 
  return 0;
}
