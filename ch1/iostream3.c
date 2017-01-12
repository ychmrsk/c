#include <stdio.h>

/*
  c = getchar() != EOF  means  c = (getchar() != EOF)
 */

int main()
{
  int c;

  while (c = getchar() != EOF)
    putchar(c);
}
