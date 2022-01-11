#include <stdio.h>

int main() {
  int c, word_len, word_idx;
  char words[100][2][30] = { ' ' }; // assumes no more than 100 words/30 letters per word
  word_idx = word_len = 0;

  printf("Enter some words, please!\n");

  while((c = getchar()) != '\n') {
    // count until there's a space, then break to new word
    if(c != ' ') {
      words[word_idx][0][word_len] = c;
      word_len++;
    } else {
      words[word_idx][1][0] = word_len;
      word_idx++;
      word_len = 0;
    }
  }

  // include the last word captured before newline
  words[word_idx][1][0] = word_len;
  word_idx++;

  printf("\nWord Length Histogram:\n");

  for(int i = 0; i < 100; i++) {
    int length = words[i][1][0];
    int bars = 0;

    if(length > 0) {
      while(bars < length) {
        printf("#");
        bars++;
      }

      printf(" ");
      for(int j = 0; j < 30; j++) {
        printf("%c", words[i][0][j]);
      }
      printf("\n");
    }
  }
}
