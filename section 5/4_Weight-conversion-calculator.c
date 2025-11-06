#include<stdio.h>

int main(){
    // This is a weight converter calculator
    int choise = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight conversion calculator\n");
    printf("1.Kilograms to pounds\n");
    printf("2.Pounds to kilograms\n");
    printf("Insert your choice (1 or 2): ");

    scanf("%d", &choise);

    if (choise == 1)
    {
        printf("Enter the weight in kilogram: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if (choise == 2)
    {
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else
    printf("Invalide choice! Please enter 1 or 2\n");
    
    

    return 0;
}