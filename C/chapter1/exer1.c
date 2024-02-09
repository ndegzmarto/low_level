#include <stdio.h>
/* program to count tabs, newline and blanks */

int main() {
  int c, count;
  count =  0;
  while((c = getchar()) != EOF)
    if(c == '\t' || c == '\n' || c == ' ')
	++count;
  printf("%d\n", count);
}
