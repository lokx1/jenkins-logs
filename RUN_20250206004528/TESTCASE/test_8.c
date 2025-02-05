#include <stdio.h>

int main(void)
{
  int x;
  float y;

printf("\n ======================= Subtract 1 integer with 1 float ======================\n");

printf("\n Enter the Integer [x]: ");
  scanf("%d", &x);

printf("\n Enter the Float [Y]: ");
  scanf("%f", &y);
  float dif = x - y;

printf("\n (%d) - (%f) = %f\n\n", x, y, dif);
  return 0;
}

