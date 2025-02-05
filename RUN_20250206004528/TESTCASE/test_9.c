#include <stdio.h>

int main(void)
{
  float x;
  float y;
  float temp;

printf("\n ======================= SWAP 2 NUMBERS USING TEMPORARY VARIABLE ====================== \n");

printf("\n Enter the first number [X] : ");
  scanf("%f", &x);

printf("\n Enter the second number [Y] : ");
  scanf("%f", &y);
  temp = x;
  x = y;
  y = temp;

printf("\n X = %.3 f \n Y = %.3 f", x, y);
  return 0;
}

