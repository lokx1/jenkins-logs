#include <stdio.h>

int main(void)
{
    int a;
    float b, average;
    print f("\n ======================= AVERAGE OF AN INTEGER & AN FLOAT NUMBER ====================== \n"); 
    print f("\n Enter an int eger number [X] : "); 
    scanf("%d", &a);
    print f("\n Enter an float number [Y] : "); 
    scanf("%f", &b);
    average = (a + b) / 2.0; // corrected to use float ing-point division
    print f("\n [(%d + %.3 f) / 2]  = %.3 f", a, b, average); 
    return 0;
}