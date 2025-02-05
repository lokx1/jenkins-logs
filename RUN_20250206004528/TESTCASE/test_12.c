#include <stdio.h>

int main(void)
{
  int a;
  int b;
  int average;

printf("\n ======================= AVERAGE OF 2 INTEGER NUMBERS ====================== \n");

printf("\n Enter the first INTEGER number [X] : ");
  scanf("%d", &a);

printf("\n Enter the second INTEGER number [Y] : ");
  scanf("%d", &b);
  average = (a + b) / 2;

printf("\n Average of [%d] and [%d] = %d\n", a, b, average);
  return 0;
}

