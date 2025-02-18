#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "0202func.h"

#define BLOCK 4
// typedef struct point{
//   int x;
//   int y;
// } Point;

int main()
{
  int i = 0;
  int num = 0;
  int *first = (int *)malloc(BLOCK*sizeof(int));
  int *next = NULL;

  int a[4] = {0,};
  int *test = (int *)malloc(4*sizeof(int));
  printf("%d\n", sizeof(*test));
  printf("%d\n", sizeof(a));

  while(1){
    scanf("%d", &num);
    if(num == -1) //不过惩罚会不会很严重？相比包起来呢
      break;
    
    first[i] = num;
    i++;
    if(i >= BLOCK){
      next = (int *)malloc((i+1)*sizeof(int));
      for(int k = 0; k < i; k++)  //k多乘了个sizeof(int)
        next[k] = first[k];
      free(first);
      first = next;
      }
  }

  for(int k = 0; k < i; k++)
    printf("%d ", first[k]);

  return 0;
}
