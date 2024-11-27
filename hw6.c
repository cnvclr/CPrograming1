#include <stdio.h>

int main(void)
{
    int temp[5], odd[5], even[5];
    int freq_odd = 0, freq_even = 0;

    printf("Please input five integers: ");
    scanf("%d %d %d %d %d", &temp[0], &temp[1], &temp[2], &temp[3], &temp[4]);
    for (int i = 0; i <= 4; i++) {
        if (temp[i] % 2 == 1) {
            odd[freq_odd] = temp[i];
            freq_odd++;
        } else {
            even[freq_even] = temp[i];
            freq_even++;
        }
    }

    printf("\n");
    printf("Odd numbers: "); 
    for (int j = 0; j < freq_odd; j++) {
        printf("%d ", odd[j]);
    }
    printf("\n");
    printf("Even numbers: ");
    for (int k = 0; k < freq_even; k++) {
        printf("%d ", even[k]);
    }
    printf("\n");

    return 0;
}