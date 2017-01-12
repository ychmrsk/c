#include <stdio.h>

/* convert spaces to a single space */

int main()
{
  int cur, prev;
  prev = 'p';  /* not space */

  while ((cur = getchar()) != EOF) {
    if (cur != ' ') {
      if (prev == ' ')
        putchar(' ');
      putchar(cur);
    }
    prev = cur;
  }
}
