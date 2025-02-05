#include <stdio.h>

int main(void)
{
  float l;
  float vol;

printf("\n ======================= Volume of a cube ======================\n");

printf("\n Enter the length in cm [l]: ");
  scanf("%f", &l);
  vol = (l * l) * l;

printf("\n Volume of Cube = %.3 f cubic cm.\n\n", vol);
  return 0;
}

