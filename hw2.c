#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("Please enter kilometers: ");
    float km;
    scanf("%f", &km);
    float mile = km * (1 / 1.609);
    printf("%.1f km is equal to %.1f miles.\n", km, mile);
    return 0;
}