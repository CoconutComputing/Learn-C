#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int c, pc;
  pc = EOF;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      if (pc != ' ')
        putchar(c);
      if (c != ' ')
        putchar(c);
    pc = c;
  }
  return EXIT_SUCCESS;
}
