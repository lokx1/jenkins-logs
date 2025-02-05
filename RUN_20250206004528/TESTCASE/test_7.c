#include <stdio.h>

int main(void)
{
  float x;
  float y;
  float difference;

printf("\n ======================= SUBTRACT 2 FLOAT NUMBERS ====================== \n");

printf("\n Enter the first FLOAT number [x] : ");
  scanf("%f", &x);

printf("\n Enter the second FLOAT number [y] : ");
  scanf("%f", &y);
  difference = x - y;

printf("\n (%.3 f) - (%.3 f) = %.3 f", x, y, difference);
  return 0;
}

