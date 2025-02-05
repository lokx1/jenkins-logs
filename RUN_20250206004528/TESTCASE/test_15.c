#include <stdio.h>

int main(void)
{
  int a;
  float b;
  float division;

printf("\n ======================= DIVISION OF A INTEGER AND A FLOAT NUMBER ====================== \n");

printf("\n Enter a INTEGER number [X] : ");
  scanf("%d", &a);

printf("\n Enter a FLOAT number [Y] : ");
  scanf("%f", &b);
  division = ((float) a) / b;

printf("\n (%d) / (%.3 f) = %.3 f", a, b, division);
  return 0;
}

