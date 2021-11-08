#include <stdio.h>

int main(void)
{
  int c;
  int prevchar = 1;

  while ((c = getchar()) != EOF) {
    // print c if current not blank, or if current is blank and previous is not
    if (c != ' ')
      putchar(c);
    if (c == ' ' && prevchar != ' ')
      putchar(c);
      prevchar = c;
  }
}
