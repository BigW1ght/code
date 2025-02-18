#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "0202func.h"

#define BLOCK 4
// typedef struct point{
//   int x;
//   int y;
// } Point;

int *create_array(void);
void print_array(int *);

int main()
{
  int *a = create_array();


  free(a);
  return 0;
}

void print_array(int *a)
{

}

int *create_array(void)
{
  int i = 0;
  int j = 1;
  int num = 0;
  int *first = (int *)malloc(BLOCK*sizeof(int));
  int *next = NULL;

  while(1){
    scanf("%d", &num);
    if(num == -1) //不过惩罚会不会很严重？相比包起来呢
      break;
    
    first[i] = num;
    i++;
    if(i >= BLOCK*j){
      j++;
      next = (int *)malloc(j * BLOCK * sizeof(int));
      for(int k = 0; k < (j-1) * BLOCK; k++)  //k多乘了个sizeof(int)
        next[k] = first[k];
      free(first);
      first = next;
      }
  }
  return first;
}
