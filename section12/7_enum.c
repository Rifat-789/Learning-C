#include<stdio.h>

// enum Day{SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESSDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7};

typedef enum{SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESSDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7}Day;


int main(){

    //enum Day today = SUNDAY;
    Day today = SUNDAY;

    printf("%d", today);

    return 0;
}