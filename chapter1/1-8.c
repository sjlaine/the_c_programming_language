// maybe want to come back to this later -- couldn't get this to count newlines,
// because I'm using the newlines to decide that the input is finished

#include <stdio.h>

int main() {
  int tabs, blanks, c;
  tabs = blanks = 0;

  while((c = getchar()) != EOF && c != '\n') {
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++blanks;
  }

  printf("tabs: %d\nblanks: %d\n", tabs, blanks);
}
