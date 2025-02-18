#include <stdio.h>

int tadd_ok(int x, int y){
  int ret = 1;

  if(x>=0 & y>=0)
    if(x+y < 0)
      ret = 0;
  if(x<0 & y<0)
    if(x+y >= 0)
      ret = 0;
  return ret;
}

int main(int argc, char *argv[]){
  
  printf("%d", tadd_ok(-2147483646, -323));
  
  return 0;
}