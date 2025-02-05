#include <stdio.h>

int main(void)
{
  int a;
  float b;
  float product;

printf("\n ======================= PRODUCT OF A INTEGER & A FLOAT NUMBER ====================== \n");

printf("\n Enter the INTEGER number [X] : ");
  scanf("%d", &a);

printf("\n Enter the FLOAT number [Y] : ");
  scanf("%f", &b);
  product = a * b;

printf("\n (%d) * (%.3 f) = %.3 f", a, b, product);
  return 0;
}

