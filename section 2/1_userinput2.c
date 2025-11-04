#include <stdio.h>
#include <string.h> //useful functions for strings

int main(){

    int age = 0;
    float gpa = 0.0f; //f for float, not double
    char grade = '\0'; //This is null terminator . it tells where to stop
    char name[30] = "";


    printf("Enter Your Age : ");
    scanf("%d", &age);

    printf("Enter Your GPA : ");
    scanf("%f", &gpa);

    printf("Enter Your Grade : ");
    scanf(" %c", &grade);  // the space before % for changing from number to char (cancles new line buffer)

    getchar();  // does the same , but for char
    printf("Enter Your Full Name : ");
    fgets(name, sizeof(name), stdin); //scans char with spaces
    name[strlen(name) - 1] = '\0'; // cancles the new line problem after the char output


    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);





    return 0;
}