#include <stdio.h>

/* count numbers of space, tab, newline */

int main()
{
  int c, sp, tab, nl;

  sp = 0;
  tab = 0;
  nl = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++sp;
    else if (c == '\t')
      ++tab;
    else if (c == '\n')
      ++ nl;
  printf("sp:%d tab:%d nl:%d\n", sp, tab, nl);
}
