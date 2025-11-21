#include<stdio.h>
#include<stdlib.h>

                            // realloc resizes previously allocated memory
int main(){

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    char choice = '\0';
    printf("Do you want to enter more prices?(y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    { 

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("Could not reallocate memory!\n");
    }
    else{
        prices = temp;
        temp = NULL;

        for (int i = number; i < newNumber; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    number = newNumber;
    }
    }

    for (int i = 0; i < number; i++)
    {
        printf("$%.2f ", prices[i]);
    }

    
    
    free(prices);
    prices = NULL;

    return 0;
}