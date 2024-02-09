#include <stdio.h>
#define IN 0 // characters inside word
#define OUT 1 // characters outside word
/*
word count, line count, character count
*/

int main() {
  int c, nc, nw, nl, state;

  nc = nw = nl = 0;
  state = OUT;

  while((c = getchar()) != EOF){
   ++nc;
   if(c == '\n')
    ++nl;
   if(c == '\t' || c == ' ' || c == '\n')
     state = OUT;
   else if(state == OUT){
    state = IN;
    ++nw;
   }
  }
 printf("%d %d %d\n", nc, nl, nw);
}
