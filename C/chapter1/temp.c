#include <stdio.h>
/*
 print table of farenheit temp and their celsius equivalents
*/

int main() {

  float fahr, celsius;
  float lower, upper, step;
  char header[] = "fahr\tcelsius\n";
  lower = 0;
  upper = 200;
  step = 20;

  fahr = lower;
  printf("%s", header);
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

