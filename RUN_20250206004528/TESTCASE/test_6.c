#include <stdio.h>

int main(void)
{
  int x;
  float y;

printf("\n ======================= Add 1 integer with 1 float ======================\n");

printf("\n Enter the Integer [x]: ");
  scanf("%d", &x);

printf("\n Enter the Float [Y]: ");
  scanf("%f", &y);
  float sum = x + y;

printf("\n (%d) + (%f) = %.3 f\n\n", x, y, sum);
  return 0;
}

