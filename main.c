#include <stdio.h>
#include <stdlib.h>
#define UNIT_PRICE 150
#define LABOR_COST 1000

int main()
{
    float area,total_cost;

    // Get rooms area from user
    printf("Enter the area of the room in square meters:\n");
    scanf("%f",&area);

    // Calculate total cost (area*unit price+labor cost)
    total_cost=area*UNIT_PRICE+LABOR_COST;

    // Print the result
    printf("Total cost:%.2f",total_cost);
    return 0;
}
