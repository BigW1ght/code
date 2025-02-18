#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
  char name[101];
  int age;
  struct Student *next;
} ST;

int main(int argc, char *argv[]){
  ST *head = NULL, *tail;
  ST *p = (ST *)malloc(sizeof(ST));

  head = p;
  tail = p;
  tail->next = NULL;
  printf("Please enter student's name:");
  scanf("%s", p->name);
  printf("Please enter student's age:");
  scanf("%d", &p->age);
  for(int i = 0; i < 2; i++){
    p = (ST *)malloc(sizeof(ST));
    printf("Please enter student's name:");
    scanf("%s", p->name);
    printf("Please enter student's age:");
    scanf("%d", &p->age);

    tail->next = p;
    tail = p;
    tail->next = NULL;
  }
  printf("\n");
  p = head;
  while(p){
    printf("the student's name is %s\n", p->name);
    p = p->next;
  }


  return 0;
}