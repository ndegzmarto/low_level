#include <stdio.h>
/* print input as one word per line */
int main() {
  int c, prevc = 0;

  while((c = getchar()) != EOF){
    if(prevc == ' ')
      putchar('\n');
    putchar(c);
    prevc = c;
  }
}
