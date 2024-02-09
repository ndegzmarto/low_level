#include <stdio.h>
#define LIMIT 300
/* converting fahr to celsius */
float fahr_to_celsius(int fahr);

int main() { // test converter
  int i;
  printf("fahr	celsius\n");
  for(i = 0; i <=LIMIT; i=i+20)
    printf("%d	%.1f\n", i, fahr_to_celsius(i));
  return 0;
}


float fahr_to_celsius(int fahr){
  float c;

  c = (5.0/9.0) * (fahr-32);
  return c;
}
