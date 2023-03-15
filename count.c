#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double nc;
  
  for (nc = 0; getchar() != EOF; ++nc)
    ;
    printf("%.0f\n",nc);
  return EXIT_SUCCESS;
}
