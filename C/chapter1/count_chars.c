#include <stdio.h>

/*
count characters program
*/

int main() {
  long nc;
  nc = 0;

  while(getchar() != EOF){
    ++nc;
  }
  printf("%ld\n", nc);

}
