#include <stdio.h>

int main(void)
{
  float x;
  float y;

printf("\n ======================= AVERAGE OF 2 FLOAT NUMBERS ======================\n");

printf("\n Enter the First Float [x]: ");
  scanf("%f", &x);

printf("\n Enter the Second Float [Y]: ");
  scanf("%f", &y);
  float avg = (x + y) / 2;

printf("\n ((%f) + (%f))/2 = %.3 f\n\n", x, y, avg);
  return 0;
}

