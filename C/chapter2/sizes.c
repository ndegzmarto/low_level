#include <stdio.h>
/* compute sizes of variables */

int main() {
  int x;
  short y;
  long z;
  char i;

  printf("%d bytes\n", sizeof(x));
  printf("%d bytes\n", sizeof(y));
  printf("%d bytes\n", sizeof(z));
  printf("%d bytes\n", sizeof(i));

}
