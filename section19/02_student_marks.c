#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int *marks = malloc(n * sizeof(int));

    int *attendance = calloc(n, sizeof(int));

    if (marks == NULL || attendance == NULL){
        printf("Memorry allocation failed!");
        return 1;
    }

    for (int i = 0; i < n; i++){
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++){
        printf("Enter Attendance for student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }

    printf("\n        ---STUDENT INFORMATION---\n");
    
    for (int i = 0; i < n; i++){
        printf("Student %d ->", i + 1);
        printf("   Marks: %d", marks[i]);
        printf("|   Attendance: %d", attendance[i]);
        printf("\n");
    }

    free(marks);
    free(attendance);


    return 0;
}