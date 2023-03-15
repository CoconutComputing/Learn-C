#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int c, nl, blank, tab;
  nl, blank, tab = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
    else if (c == ' ')
      ++blank;
    else if (c == '\t')
      ++tab;

    printf("%d New lines, %d Blanks, and %d tabs.\n",nl,blank,tab);
  return EXIT_SUCCESS;
}
