#include<stdio.h>

int main(){

    // array = a fixed-size collection of elements of the same data type. Holds more than one value

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    char name[] = "Rifat";

 /* numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
    numbers[3] = 70;
    numbers[4] = 60; */

 /* printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]); */

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }



    return 0;
}