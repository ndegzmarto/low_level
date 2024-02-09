#include <stdio.h>
#include <stdbool.h>
/* replace one or more blanks by a single blank */

int main(){
  int c, prevchar =  0;

  while((c = getchar()) != EOF) {
    if(c != ' ' || prevchar != ' ') {
      putchar(c);
    }
    prevchar = c;
  }
}
