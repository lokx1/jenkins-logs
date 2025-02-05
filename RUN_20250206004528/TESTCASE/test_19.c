#include <stdio.h>

int main(void)
{
  int x;
  int y;
  int sum;

printf("\n ======================= SUM OF 2 INTEGER NUMBERS ======================\n");

printf("\n Enter the First Integer [x]: ");
  scanf("%d", &x);

printf("\n Enter the Second Integer [Y]: ");
  scanf("%d", &y);
  sum = x + y;

printf("\n (%d) + (%d) = %d\n\n", x, y, sum);
  return 0;
}

