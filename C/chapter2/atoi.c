#include <stdio.h>
/* atoi - convert s into an integer
 * @s: string
 * Return: integer
 */

int atoi(char s[]) {
  int n, i;
  n = 0;
  for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    n = 10 * n + (s[i] - '0');
  return n;
}


/*
 * main - test atoi
 */
int main(){
  char *num = "50";
  int res = atoi(num) + 50;
  printf("%d\n", res);
}
