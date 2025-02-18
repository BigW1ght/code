#include<stdio.h>

int main()
{
  int i,j;
  for(j = 1; j <= 9; j++)
    for(i = 1; i <= j; i++){
      printf("%d*%d=%d", i, j, i*j);
      if(i == j)
        printf("\n");
      else
        printf("\t");
    }
  return 0;
}