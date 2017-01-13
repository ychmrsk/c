#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int len);

int main()
{
  int len;
  char line[MAXLINE];
  char rev[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {
    reverse(rev, line, len);
    printf("%s", rev);
  }
}

int get_line(char s[], int lim)
{
  int c, i;

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

void reverse(char to[], char from[], int len)
{
  int i, j;
  int newline;

  i = len - 1;
  j = 0;
  newline = 0;

  while (i >= 0) {
    if (from[i] == '\n')
      newline = 1;
    else
      to[j] = from[i];
    --i;
    ++j;
  }
  if (newline == 1) {
    to[j] = '\n';
    ++j;
  }
  to[j] = '\0';
}
