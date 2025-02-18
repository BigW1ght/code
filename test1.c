#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

  char p[] = "abcBaSD";
  for(int i = 0; i < strlen(p); i++){
    if(p[i] >= 'a' && p[i] <= 'z'){
      p[i] += 'A' - 'a'; 
    }
  }

  puts(p);
}