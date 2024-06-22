#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float num = 0;
    printf("Enter a number : ");
    scanf("%f", &num);

    float res = abs(num);
    printf("res = %f\n", res);
}