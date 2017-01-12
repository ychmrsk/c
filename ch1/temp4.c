#include <stdio.h>

/* convert temperatures in unit of celsius to one of fahr */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -18;
  upper = 150;
  step = 12;

  printf("%s %s\n", "cels", "fahrenheit");
  
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
