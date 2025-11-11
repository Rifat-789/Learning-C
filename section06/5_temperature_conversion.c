#include<stdio.h>

int main(){

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("This is a temperature converter\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsuis\n");
    printf("Is the temp in Celsuis (C) or Fahrenheit (F)?: ");

    scanf("%s",&choice);

    if (choice == 'C')
    {
       printf("Enter the temperature in Celsius: ");
       scanf("%f", &celsius);
       fahrenheit = (celsius * 9/5) + 32;
       printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F')
    {
       printf("Enter the temperature in Fahrenheit: ");
       scanf("%f", &fahrenheit);
       celsius = (fahrenheit -32) * 5/9 ;
       printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else
    printf("Invalid choice. Please select C or F");
    


    return 0;
}