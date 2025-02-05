#include <stdio.h>

int main(void)
{
  float a;
  float b;

printf("\n ======================= SWAP 2 NUMBERS WITHOUT USING TEMPORARY VARIABLES ====================== \n");

printf("\n Enter the first number [X] : ");
  scanf("%f", &a);

printf("\n Enter the second number [Y] : ");
  scanf("%f", &b);
  a = a + b;
  b = a - b;
  a = a - b;

printf("\n First Number [X] = %.3 f\n Second Number [Y] = %.3 f\n", b, a);
  return 0;
}

