#include <stdio.h>

int main(){

     int age = 22;
    int year = 2025;
    int quantity = 3;

   float gpa = 3.5;
   float price = 19.99;
   float temp = 18.7;

   double pi = 3.14159265359;  //double is a long type of float
   double e = 2.7182818284;

   char grade ='A' ;
   char symbol ='!' ;

   char name[] = "Rifat";
   char food[] = "Pizza";


    printf("You are %d years old\n" ,age);
    printf("This is %d\n" ,year);
    printf("You have orderd %dx items\n" ,quantity);


   printf("Your GPA is %f\n", gpa);
   printf("Your GPA is %.2f\n", gpa);
   printf("The price is %f\n", price);
   printf("The tempereture is %f\n", temp);

   printf("The value of pi is %.15lf\n", pi);  //lf for long float
   printf("The value of e is %.15lf\n", e);

   printf("Your grade is %c\n", grade);
   printf("Your favourite symbol is %c\n", symbol);

   printf("Hello %s\n", name);
   printf("Your favourite food is %s\n", food);




    return 0;
}