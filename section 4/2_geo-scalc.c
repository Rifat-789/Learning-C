#include<stdio.h>
#include<math.h>

int main(){

    double radius = 0;
    double area = 0;
    double surfaceArea = 0;
    double volume = 0;
    const double PI = 3.14159; //const for any value you don't want to change

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3); 


    printf("The area is %.2lf\n", area);
    printf("The Surface Area is %.2lf\n", surfaceArea);
    printf("The Volume is %.2lf\n", volume);

    return 0;
}