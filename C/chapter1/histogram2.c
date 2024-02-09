#include <stdio.h>
#include <ctype.h>
#define NUM_CHARS 256
int main() {
  int frequencies[NUM_CHARS] = {0};
  int c;
  printf("Enter some text (press Ctrl+D on Unix/Linux or Ctrl+Z on Windows to end input):\n");
    // Count the frequencies of each character
  while ((c = getchar()) != EOF) {
    if (isascii(c)) // Ensure character is ASCII
      frequencies[c]++;
    }
    // Print the histogram
  printf("\nCharacter frequencies histogram:\n");
  for (int i = 0; i < NUM_CHARS; i++) {
    if (frequencies[i] > 0 && isprint(i)) { // Print only printable characters
      printf("'%c' (%d): ", i, i);
      for (int j = 0; j < frequencies[i]; j++)
        printf("*");
        printf("\n");
        }
    }
    return 0;
}
