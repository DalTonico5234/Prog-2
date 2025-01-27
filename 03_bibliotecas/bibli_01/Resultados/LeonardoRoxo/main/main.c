#include <stdio.h>
#include "esfera_utils.h"

int main ()
{
    float R;
    scanf("%f", &R);
    printf("Area: %.2f\nVolume: %.2f", calcula_area(R), calcula_volume(R));
}