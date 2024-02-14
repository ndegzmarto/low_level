#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


/**
 * removeSub - remove substring
 * @str: string
 * @sub: sub;
 */
void removeSub(char *str, char *sub){
  char *match = strstr(str, sub);

  if(match != NULL){
    int sublen = strlen(sub);

    memmove(match, match + sublen, strlen(match+sublen)+1);
  }
}
/**
 * htoi - convert hexadecimal string to an integer
 * @s - hexadecimal string
 * Return: decimal value
 */

int htoi(char *s){
  int len = strlen(s);
  int decval = 0;
  int base = 1;
  int i = 0;
  for(i = len - 1; i >= 0; i--) {
    if(isdigit(s[i])){
      decval += (s[i] - '0') * base;
      base = base * 16;
    }else if ((s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f')){
      decval += (toupper(s[i]) - 'A' + 10)  * base;
      base = base * 16;
    }
  }
  return decval;
}

/**
 * main - test htoi;
 */

int main () {
  char *hex[] = {
    "1A",
    "0x1A",
    "0xFF",
    "0x4E2",
    "0xBEEF",
    "0x123456",
    "0xA0C3",
    "0xABCDEF",
    "0x7F8",
    "0x9D2F",
    "0x8000"};
  int hex_len = sizeof(hex) / sizeof(hex[0]);
  for (int i = 0; i < hex_len; i++){
    char hexcopy[10]; // create mutable array characters (you can't mutate string literals) 
    strcpy(hexcopy, hex[i]);
    removeSub(hexcopy, "0x");
    // removeSub(hex[i], "0X");
    printf("%d\n", htoi(hexcopy));
  }
}
