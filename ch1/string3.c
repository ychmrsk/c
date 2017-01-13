#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len, i, newline;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {
    newline = 0;
    for (i = len -1 ; i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'); --i)
      if (line[i] == '\n')
        newline = 1;
    ++i;
    if (newline == 1) {
      line[i] = '\n';
      ++i;
    }
    line[i] = '\0';

    if (line[0] != '\n' && line[0] != '\0')
      printf("%s", line);
  }

  return 0;
}

int get_line(char s[], int lim)
{
  int i, c;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
