#include <stdio.h>

int main(void)
{
    char str[50];
    fgets(str, sizeof(str), stdin);

    for (int i=0; str[i]!='\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    printf("%s\n", str);
    return 0;
}