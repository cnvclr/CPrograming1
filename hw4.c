#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        if (num == 1)
        {
            printf("It is not a prime number.\n");
            break;
            return 0;
        }
        if (i < num && num % i == 0)
        {
            printf("It is not a prime number.\n");
            break;
            return 0;
        }
        if (i == num)
        {
            printf("It is a prime number.\n");
        }
    }
}