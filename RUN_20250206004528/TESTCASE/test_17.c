#include <stdio.h>

int main(void)
{
  float x;
  float y;
  float sum;

printf("\n ======================= SUM OF 2 FLOAT NUMBERS ====================== \n");

printf("\n Enter the first FLOAT number [x] : ");
  scanf("%f", &x);

printf("\n Enter the second FLOAT number [y] : ");
  scanf("%f", &y);
  sum = x + y;

printf("\n (%.3 f) + (%.3 f) = %.3 f", x, y, sum);
  return 0;
}

