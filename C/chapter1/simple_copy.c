#include <stdio.h>
/*
simple copying of input to output
*/

int main(){
  int c;

  while((c = getchar()) != EOF)
    putchar(c);
}
