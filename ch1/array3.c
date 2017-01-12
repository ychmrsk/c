#include <stdio.h>

#define IN  1
#define OUT 0

/* print histgram of the length of words */

int main()
{
  int i, c, state, cnt;
  int len[5];
  
  cnt = 0;
  state = OUT;

  for (i = 0; i < 5; ++i)
    len[i] = 0;
  
  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        /* printf("%d ", cnt); */
        ++len[cnt];
        cnt = 0;
        state = OUT;
      }
    }
    else {
      state = IN;
      if (cnt < 4)
        ++cnt;
    }

  for (i = 0; i < 5; ++i)
    printf("%d => %d times\n", i, len[i]);
}
