#include <stdio.h>

int uadd_ok(unsigned x, unsigned y)
{
  int ret = 1;
  unsigned z = x + y;
  if(z < x || z < y)
    ret = 0;
  return ret;
}

int main(int argc, char *argv[]){

  int x, y;
  scanf("%u %u", &x, &y);
  if(uadd_ok(x, y)){
    printf("%u", x+y);
  }else{
    printf("error");
  }
  return 0;
}