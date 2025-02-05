#include <stdio.h>

int main(void)
{
  float x;
  float y;

printf("\n ======================= Product of 2 float numbers ======================\n");

printf("\n Enter the First Float [x]: ");
  scanf("%f", &x);

printf("\n Enter the Second Float [Y]: ");
  scanf("%f", &y);
  float pro = x * y;

printf("\n (%f) * (%f) = %.3 f\n\n", x, y, pro);
  return 0;
}

