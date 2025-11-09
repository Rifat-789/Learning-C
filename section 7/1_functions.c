#include<stdio.h>
#include<string.h>


 // Function is reusable 

void birthday(char name[], int age){           // matching paramiters
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you");
    printf("\nHappy birthday dear %s", name);
    printf("\nYou are %d years old\n", age);
}

int main(){

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    birthday(name, age);  // aregument sends data to function


    return 0;
}