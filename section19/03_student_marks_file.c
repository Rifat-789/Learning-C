#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int id;
    int marks;
    int attendance;
} Student;

void addStudent(){
    Student *s = malloc(sizeof(Student));

    if (s == NULL){
        printf("Memory allocation failed!\n");
    }

    FILE *pFile = fopen("students.dat", "ab");

    if (pFile == NULL){
        printf("File could not be opened!");

        free(s);
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &s->id);

    printf("Enter Student Marks: ");
    scanf("%d", &s->marks);

    printf("Enter Studen Attendance: ");
    scanf("%d", &s->attendance);

    fwrite(s, sizeof(Student), 1, pFile);

    fclose(pFile);

    free(s);

    printf("\nStudent saved successfully!\n");
}

void viewStudent(){
    FILE *pFile = fopen("students.dat", "rb");

    int count = 0;

    Student temp;

    if(pFile == NULL){
        printf("No data found!");
        return;
    }

    while(fread(&temp, sizeof(Student), 1, pFile) == 1){
        count++;
    }

    rewind(pFile);

    Student *students = calloc(count, sizeof(Student));

    if (students == NULL){
        printf("Memory allocation failed!\n");

        fclose(pFile);
        return;
    }

    fread(students, sizeof(Student), count, pFile);

    printf("\n--- Student List ---\n");

    for (int i = 0; i < count; i++){
        printf("ID: %d | Marks: %d | Attendance: %d\n", students[i].id, students[i].marks, students[i].attendance);
    }

    fclose(pFile);
    free(students);
}

int main(){

    int choice;

    while(1){
        printf("\n===== STUDENT SYSTEM =====\n");

        printf("1. Add Student Info\n");
        printf("2. View Student Info\n");
        printf("3. Exit\n");

        printf("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            viewStudent();
            break;

        case 3:
            
            return 0;
        
        default:
            printf("\nInvalid Choice!\n");
        }
    }


    return 0;
}