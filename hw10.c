#include <stdio.h>
#include <string.h>

typedef struct city {
    char name[30];
    char country[30];
    int population;
} City;

int main(void)
{
    City cities[3];
    
    printf("Input three cities: \n");
    
    for (int i=0; i<3; i++) {
        printf("Name> "); fgets(cities[i].name, sizeof(cities[i].name), stdin);
        cities[i].name[strcspn(cities[i].name, "\n")] = '\0'; // 안 쓰면 출력할 때 밀림

        printf("Country> "); fgets(cities[i].country, sizeof(cities[i].country), stdin);
        cities[i].country[strcspn(cities[i].country, "\n")] = '\0'; // 안 쓰면 출력할 때 밀림

        printf("Population> "); scanf("%d", &cities[i].population);
        getchar(); // 안쓰면 자꾸 문제생김
    }

    printf("Printing the three cities: \n");
    
    for (int i=0; i<3; i++) {
        printf("%d. %s in %s with a population of %d people\n", i+1, cities[i].name, cities[i].country, cities[i].population);
    }
    return 0;
}