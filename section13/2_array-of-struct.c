#include<stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;
}Car;
                                                                // an array where each element is a struct
int main(){

    Car cars[] = {{"Mustang", 2022, 54000},
                  {"Nissan", 2024, 42000},
                  {"Challenger", 2025, 48000}};

    int number = sizeof(cars) / sizeof(cars[0]);  // for counting the elements

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    


    return 0;
}