#include<stdio.h>

int main(){

    int dayOfWeek = 0;

    printf("Enter the day of week (1-7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("This is Monday");
        break;
    case 2:
        printf("This is Tuesday");
        break;
    case 3:
        printf("This is Wednesday");
        break;
    case 4:
        printf("This is Thursday");
        break;
    case 5:
        printf("This is Friday");
        break;
    case 6:
        printf("This is Saturday");
        break;
    case 7:
        printf("This is Sunday");
        break;
    
    default:
        printf("Please only enter a number between (1-7)");
    }

    return 0;
}