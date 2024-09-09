#include <stdio.h>

// HW1

int main(void)
{
    int temp1 = 0, temp2 = 0;
    printf("Input two integers : "); // 10, 15
    scanf("%d %d", &temp1, &temp2);

    printf("10 & 15 = %d\n", temp1 & temp2); // AND operator
    printf("10 | 15 = %d\n", temp1 | temp2); // OR operator
    printf("10 ^ 15 = %d\n", temp1 ^ temp2); // XOR operator

    return 0;
}