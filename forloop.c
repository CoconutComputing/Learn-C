#include <stdio.h>
#include <stdlib.h>


#define UPPER 300 /*Upper bound of temperature*/
#define LOWER 0 /*Lower bound for temperature*/
#define STEP 20 /*Increments temperature each iteration*/

int main(int argc, char *argv[])
{
  printf("Farenheit\tCelcius\n\n");

  int fahr;

  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%d\t\t%.2f\n",fahr, (fahr-32)*(5.0/9.0));
  
  return EXIT_SUCCESS;
}
