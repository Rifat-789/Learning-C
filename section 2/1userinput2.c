#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f; //f for float, not double
    char grade = '\0'; //This is null terminator
    char name[30] = "";


    printf("Enter Your Age : ");
    scanf("%d", &age);

    printf("Enter Your GPA : ");
    scanf("%f", &gpa);

    printf("Enter Your Grade : ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter Your Full Name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    //printf("%s\n", name);





    return 0;
}