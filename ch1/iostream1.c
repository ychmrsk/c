#include <stdio.h>

/*
  text stream
  -- c = getchar()
  -- putchar(c)
*/

int main()
{
  int c;

  c = getchar();
  while (c != EOF) {  /* EOF is defined in <stdio.h> */
    putchar(c);
    c = getchar();
  }
}
