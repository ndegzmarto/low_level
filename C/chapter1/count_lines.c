#include <stdio.h>
/* count lines in input */

int main(){
  int c, nl;

  nl = 1;
  while((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}
