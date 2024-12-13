#include <stdio.h>

int main(void)
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};
    printf("arr1: ");
    for (int i=0; i<6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("arr2: ");
    for (int i=0; i<6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n"), printf("\n");

    printf("after swap\n");
    int* p1 = &arr1[0];
    int* p2 = &arr2[0];
    for (int i=0; i<6; i++) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2++;
    }
    printf("arr1: ");
    for (int i=0; i<6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("arr2: ");
    for (int i=0; i<6; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}