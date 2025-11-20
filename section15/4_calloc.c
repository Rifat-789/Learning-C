#include<stdio.h>
#include<stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));  // calloc sets all the initial values to 0.

    if (scores == NULL)   // in-case the function doesn't return anything 
    {
        printf("Memorry allocation failed");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }
    
    

    free(scores);
    scores = NULL;

    return 0;
}