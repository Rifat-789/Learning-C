#include <stdio.h>
#include <string.h>

int main(){

    char item_name[30] = "";
    float price = 0.0f;
    int count = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What would you like to buy? : ");
    fgets(item_name, sizeof(item_name), stdin);
    item_name[strlen(item_name) - 1] = '\0'; // to cancle the reading programm

    printf("what is the price? : ");
    scanf("%f", &price);

    printf("How many do you want? : ");
    scanf("%d", &count);

    total = count * price;

    printf("\nYou have brought %d %s/s\n", count, item_name);
    printf("Your total is : %c%.2f", currency, total);



    return 0;
}