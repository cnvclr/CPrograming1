#include <stdio.h>

int main(void)
{
    int temp1 = 2;
    int temp2 = 5;
    for (int i = 1; i < 6; i++)
    {
        for (int j = temp1; j < 6; j++)
        {
            printf(" ");
        }
        temp1++;

        for (int k = temp2; k < 6; k++)
        {
            printf("*");
        }
        temp2 -= 2;
        printf("\n");
    }
    return 0;
}
