#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 500;
  step = 20;

  fahr = lower;
  printf("Farenheit\tCelcius\n");

  while (fahr <= upper){
    celcius = 5 * (fahr-32) / 9;
    printf("%.2f\t\t%.2f\n", fahr, celcius);
    fahr += step;
  }
  printf("\n");
  printf("Celcius\tFarenheit\n");


  celcius = lower;
    while (celcius <= upper) 
  {
    fahr = (celcius * 1.8) + 32;
    printf("%.2f\t\t%.2f\n",celcius, fahr);
    celcius += step;
  }
  


  return EXIT_SUCCESS;
}
