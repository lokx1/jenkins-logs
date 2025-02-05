#include <stdio.h>

int main(void)
{
  float s;
  float u;
  float t;
  float a;

printf("\n ======================= To Find S = ut + 1/2 at^2 ======================\n");

printf("\n Enter Acceleration in m/(s^2) [a]: ");
  scanf("%f", &a);

printf("\n Enter Initial Velocity in m/s [u]: ");
  scanf("%f", &u);

printf("\n Enter Time in second [t]: ");
  scanf("%f", &t);
  s = (u * t) + (((0.5 * a) * t) * t);

printf("\n Distance = %.3 f m\n\n", s);
  return 0;
}

