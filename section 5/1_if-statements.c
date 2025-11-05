#include<stdio.h>

 int main(){

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60)
    {
        printf("You are a Senior");
    }

    else if (age >= 18)
    {
        printf("You are an adult");

    }

    else if (age == 0)
    {
        printf("You are a newborn");
    }
    
    else if (age < 0)
    {
        printf("You haven't been born yet");
    }
    
    else 
    printf("You are a child");
    


    return 0;
 }