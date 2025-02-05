#include <stdio.h>

int main(void)
{
  int x;
  int y;
  int product;

printf("\n ======================= PRODUCT OF 2 INTEGERS ====================== \n");

printf(" Enter the first integer [X]: ");
  scanf("%d", &x);

printf(" Enter the second integer [Y]: ");
  scanf("%d", &y);
  product = x * y;

printf("\n (%d) * (%d) = %d", x, y, product);
  return 0;
}

