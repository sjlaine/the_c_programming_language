#include <stdio.h>

// print Fahrenheit - Celsius table

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;
  printf("Fahr Celsius\n");

  while (fahr >= lower) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%4.0f %7.1f\n", fahr, celsius);
    fahr = fahr - step;
  }

  celsius = upper;
  printf("Celsius Fahr\n");

  while (celsius >= lower) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%4.0f %7.1f\n", celsius, fahr);
    celsius = celsius - step;
  }
}
