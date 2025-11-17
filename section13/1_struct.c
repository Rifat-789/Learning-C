#include<stdio.h>
#include<stdbool.h>
#include<string.h>
                                                //custom container that holds multiple pieces of related info

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main(){

    Student student1 = {"Rifat", 21, 3.92, true};
    Student student2 = {"Tasin", 17, 4.92, true};
    Student student3 = {"Alvee", 21, 3.95, false};
    Student student4 = {0};

    strcpy(student4.name, "Rony");
    student4.age = 20;
    student4.gpa = 3.8;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-Time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}