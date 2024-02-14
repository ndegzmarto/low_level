#include <stdio.h>

#define MAXLINE 10000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int getlines(char s[], int lmt) {
    int c, i, j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < lmt - 1) { // Avoid buffer overflow
            s[j] = c;
            j++;
        }
    }
    if (c == '\n' && j < lmt - 1) { // Ensure there's space for the newline character
        s[j] = c;
        j++;
        i++;
    }

    s[j] = '\0'; // Ensure null termination
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

int main() {
    int len; // current line length
    int max; // maximum longest line length so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;
    while ((len = getlines(line, MAXLINE)) > 0) {
        // printf("%s %d\n", line, len);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("Longest line: %s\n", longest);

    return 0;
}
