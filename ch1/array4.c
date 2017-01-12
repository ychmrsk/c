#include <stdio.h>

/* print histgram of the frequency of alphabets */
int main()
{
  int i, c;
  int freq[26+26+10];

  for (i = 0; i < 26+26+10; ++i)
    freq[i] = 0;
  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++freq[c-'0'+26+26];
    else if (c >= 'A' && c <= 'Z')
      ++freq[c-'A'];
    else if (c >= 'a' && c <= 'z')
      ++freq[c-'a'+26];
  for (i = 0; i < 26; ++i)
    printf("%c : %d\n", i+'A', freq[i]);
  for (i = 26; i < 26+26; ++i)
    printf("%c : %d\n", i+'a'-26, freq[i]);
  for (i = 26+26; i < 26+26+10; ++i)
    printf("%d : %d\n", i-26-26, freq[i]);
}
