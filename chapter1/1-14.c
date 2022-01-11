#include <stdio.h>

int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  char alphabet[26][2] = {
    { 'a', 0 }, { 'b', 0 }, { 'c', 0 }, { 'd', 0 }, { 'e', 0 }, { 'f', 0 },
    { 'g', 0 }, { 'h', 0 }, { 'i', 0 }, { 'j', 0 }, { 'k', 0 }, { 'l', 0 },
    { 'm', 0 }, { 'n', 0 }, { 'o', 0 }, { 'p', 0 }, { 'q', 0 }, { 'r', 0 },
    { 's', 0 }, { 't', 0 }, { 'u', 0 }, { 'v', 0 }, { 'w', 0 }, { 'x', 0 },
    { 'y', 0 }, { 'z', 0 }
  };

  while((c = getchar()) != '\n') {
    for(int i = 0; i < 26; i++) {
      if(alphabet[i][0] == c) {
        alphabet[i][1] += 1;
        break;
      }
    }
  }

  printf("\nLetter Count Histogram:\n");

  for(i = 0; i < 26; i++) {
    char letter = alphabet[i][0];
    int count = alphabet[i][1];
    int bars = 0;

    if(count > 0) {
      while(bars < count) {
        printf("#");
        bars++;
      }

      printf(" %c\n", alphabet[i][0]);
    }
  }
}
