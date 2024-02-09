#include <stdio.h>
/*
print histogram of the lengths of words in its input
*/

int main() {
  int c;

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\n')
      putchar('\n');
    else{
      putchar('=');
    }
  }
}
