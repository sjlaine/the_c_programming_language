#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main() {
  int c, state;

  while((c = getchar()) != EOF) {
    if (c == ' ')
      state = OUT;
    else
      state = IN;
    if (state == OUT)
      putchar('\n');

    putchar(c);
  }
}
