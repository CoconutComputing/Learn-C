#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{

  short s_min = SHRT_MIN;
  short s_max = SHRT_MAX;

  printf("Min value of short: %hd \n", s_min);
  printf("Max val of short: %hd \n",s_max);
  printf("Sixe of short in bytes: %lu \n",sizeof(s_max));



  return 0;
}
