#include <stdio.h>
#define MAXLINE 1000  /* max length of input line */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;  /* length of current line */
  int max;  /* max length */
  char line[MAXLINE];  /* current line */
  char longest[MAXLINE];  /* line that has max length */

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)
    printf("%s", longest);
  
  return 0;
}

int getline(char s[], int lim)
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

  while ((to[i] = from[i]) != '\0')
    ++i;
}
