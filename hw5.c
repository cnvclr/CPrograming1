#include <stdio.h>

void binary(int n)
{
    if (n == 0)
        return;
    binary(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a == 0) {
        printf("0");
    } else {
        binary(a);
    }
    printf("\n");
    return 0;
}