#include <stdio.h>

int main(void)
{
  float pie;
  float radius;
  float area;
  pie = 3.14159;

printf("\n ======================= SURFACE AREA OF A SPHERE ====================== \n");

printf("\n Enter the RADIUS of the sphere [r] : ");
  scanf("%f", &radius);
  area = ((4 * pie) * radius) * radius;

printf("\n SURFACE AREA OF THE SPHERE = %.3 f sq. units", area);
  return 0;
}

