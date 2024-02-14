#include <stdio.h>

/*
* Reverse - reverse an input string
* @s(string): input string
* Return: reversed input string 
*/

void Reverse(char s[]) {
  int i, j;
  i = 0;
  while(s[i] != '\0')
    i++;
  i--;
  if (s[i] == '\n')
    i--;
  j = 0;
  char temp;
  while(j < i){
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    i--;
    j++;
  }
}

/**
* main - test function Reverse()
*/

int main(){
  char name[] = "martin";
  Reverse(name);
  printf("%s\n", name);
}
