#include <stdio.h>
#include <math.h>

void SD(int array[])
{
    double ave = 0;
    for (int i=0; i<5; i++) {
        ave += array[i];
    }
    ave /= 5.0;

    double gap_sq = 0;
    for (int i=0; i<5; i++) {
        gap_sq += pow(array[i] - ave, 2);
    }

    double sd = sqrt(gap_sq / 5);
    printf("%.3f\n", sd);
}

int main(void)
{
    int arr[5];
    int* ptr = arr;
    for (int i=0; i<5; i++) {
        scanf("%d", ptr+i);
    }

    SD(arr);
    return 0;
}