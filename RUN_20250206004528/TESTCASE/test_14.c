#include <stdio.h>

int main(void)
{
  int x;
  int y;
  int diff;

printf("\n ======================= Subtraction OF 2 INTEGER NUMBERS ======================\n");

printf("\n Enter the First Integer [x]: ");
  scanf("%d", &x);

printf("\n Enter the Second Integer [Y]: ");
  scanf("%d", &y);
  diff = x - y;

printf("\n (%d) - (%d) = %d\n\n", x, y, diff);
  return 0;
}

