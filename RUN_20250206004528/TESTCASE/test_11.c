#include <stdio.h>

int main(void)
{
  float a;
  float b;
  float division;

printf("\n ======================= DIVISION OF 2 FLOAT NUMBERS ====================== \n");

printf("\n Enter the first FLOAT number [X] : ");
  scanf("%f", &a);

printf("\n Enter the second FLOAT number [Y] : ");
  scanf("%f", &b);
  division = a / b;

printf("\n (%.3 f) / (%.3 f) = %.3 f", a, b, division);
  return 0;
}

